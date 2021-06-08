#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<unistd.h>

int data =0,read_count =0;
sem_t mutex, rw_mutex;

void *reader(void *thread){
	int t= (int)(intptr_t)thread;
// Entry Section code
	sem_wait(&mutex);
	read_count++;
	if (read_count == 1){
	//wait
	sem_wait(&rw_mutex);
	}	
	//signal
	sem_post(&mutex);
	// Critical Section code
	printf("Data read by thread %d is %d\n", t, data);
	sleep(1);
	//Exit Section code
	sem_wait(&mutex);
	read_count--;
	if (read_count == 0)
	{
		sem_post(&rw_mutex);
	}
	sem_post(&mutex);
}
void *writer(void *thread)
{
int t = (int)(intptr_t)thread;
// Entry Section code
sem_wait(&rw_mutex);
// Critical Section code
data++;
printf("Data written by thread %d is %d\n", t, data);
sleep(1);
//Exit Section code
sem_post(&rw_mutex);
}

int main()
{
// creating 3 readers and 3 writers
pthread_t read[5], write[5];
//initializing the semaphores;
// in sem_init, 0 is to tell the value of this semaphore is shared between the thread and 1 is the value of this semaphore;
sem_init(&mutex, 0, 1);
sem_init(&rw_mutex, 0, 1);

 //creating threads
for (int i=0; i<=3; i++)
{
pthread_create(&write[i], NULL, writer, (void *)(intptr_t)i);
pthread_create(&read[i], NULL, reader, (void *)(intptr_t)i);
}
//joining the threads
for (int i=0; i<=3; i++)
{
pthread_join(write[i], NULL);
pthread_join(read[i], NULL);
}
return 0;
}
