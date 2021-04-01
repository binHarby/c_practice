#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>


int sum = 0;
int mean = 0;

// calculating the sum
void *sum_incremental(void *args)
{
	printf("Child thread created with id: %u\n", (int)pthread_self());
	int i;
	int size = atoi(args);
	
	for (i = 0; i <= size; i++)
	{
		sum+=i;
	}
	
	pthread_exit(0);
}

// calculating the mean
void *mean_incremental(void *args)
{
	int sum = 0;
	printf("Child thread created with id: %u\n", (int)pthread_self());
	int i;
	int size = atoi(args);
	
	for (i = 0; i <= size; i++)
	{
		sum+=i;
	}
	
	mean = sum/size;
	pthread_exit(0);
}

int main (int args, char *argv[])
{
	if (args < 2)
	{
		printf("Not enough arguments\n");
		return -1;
	}
	
	printf("Parent thread created with id: %u\n", (int)pthread_self());
	
	//thread identifer
	pthread_t tids[2];
	
	//create a thread with required parameters
	pthread_create(&tids[0], NULL, sum_incremental, argv[1]);
	pthread_create(&tids[1], NULL, mean_incremental, argv[1]);
	
	pthread_join(*tids, NULL);
	
	
	printf("Sum is: %d\n", sum);
	
	
	
	printf("Mean is: %d\n", mean);
	return 0;
}
