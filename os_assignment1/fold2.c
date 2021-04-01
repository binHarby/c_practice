#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>


long long sumAll = 0;
long long sumEven= 0;

// calculating Total Sum to sumAll
void *sum_all(void* num)
{
	printf("child thread created with id: %u\n", (unsigned int)pthread_self());
	int size= *(int *)num;	
	for (int i = 0; i <= size; i++)
	{
		sumAll+=i;
	}
	pthread_exit(0);
}

// calculating the sum of even numbers
void *sum_even(void* num)
{
	printf("child thread created with id: %u\n", (unsigned int)pthread_self());
	int size= *(int *)num;	
	for (int i = 0; i <= size; i+=2)
	{
		sumEven+=i;
	}
	pthread_exit(0);
}

int main (void)
{
	//get the number input from the user, and assign it to variable 'number'	
	int number;
	printf("Enter a number to sum to from 0: ");
	scanf("%d",&number);
	
	printf("Parent thread created with id: %u\n", (unsigned int)pthread_self());
	
	//thread identifer
	pthread_t tids[2];
	
	//create a thread with required parameters
	pthread_create(&tids[0], NULL, sum_all, &number);
	pthread_create(&tids[1], NULL, sum_even, &number);
	
	pthread_join(*tids, NULL);
	
	long double sumDiv=(long double)sumAll/(long double)sumEven;	
	printf("Sum of All (from thread 1): %lld\n", sumAll);
	printf("Sum of Even numbers (from thread 2): %lld\n", sumEven);
	printf("Sum all / Sum Even = %Lf\n",sumDiv);
	
	
	return 0;
}
