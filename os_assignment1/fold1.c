#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

//long long data type can hold 18+ digits, that is why its used here
//and to avoid overflow
long long sumAll = 0;//for summing all numbers
long long sumEven= 0;//for summing even numbers

// calculating Total Sum into sumAll
void *sum_all(void* num)
{
	printf("child thread created with id: %u\n", (unsigned int)pthread_self());
	int size= *(int *)num;//casting num as an int pointer to get the value of the number we want to sum to 	
	for (int i = 0; i <= size; i++)
	{
		sumAll+=i;//add numbers(single increment) to the global variable sumAll
	}
	pthread_exit(0);//exiting the thread
}

// calculating the sum of even numbers
void *sum_even(void* num)
{
	printf("child thread created with id: %u\n", (unsigned int)pthread_self());
	int size= *(int *)num;	
	for (int i = 0; i <= size; i+=2)
	{
		sumEven+=i;//adding i with 2 increments to sumEven global variable
	}
	pthread_exit(0);
}

int main (void)
{
	
	int number=1000000000;//1,000,000,000 assigned to an int variable (number)
	
	printf("Parent thread created with id: %u\n", (unsigned int)pthread_self());
	
	//thread identifer
	pthread_t tids[2];
	
	//create a thread with required parameters
	//here we input: address to thread variable,NULL,functionForThread,address of input(if any, else NULL)
	pthread_create(&tids[0], NULL, sum_all, &number);
	pthread_create(&tids[1], NULL, sum_even, &number);
	//joining threads by passing the tids array as a pointer	
	pthread_join(*tids, NULL);
	//using long double to preform division without overflow	
	long double sumDiv=(long double)sumAll/(long double)sumEven;	
	//output
	printf("Sum of All (from thread 1): %lld\n", sumAll);
	printf("Sum of Even numbers (from thread 2): %lld\n", sumEven);
	printf("Sum all / Sum Even = %Lf\n",sumDiv);
	
	
	return 0;
}
