// Create a new thread printing all prime numbers from 2 to 1,000,000
//Create another thread printing Fibonacci sequence from 2 to 1,000,000;
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *prime(void *arg)
{
	signed long int low, high, i, flag;
	low = 2;
	high = 1000000;

	while (low < high)
	{
		flag = 0;

		// if low is a non-prime number, flag will be 1
		for (i = 2; i <= low / 2; ++i)
		{
			if (low % i == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			printf("Prime: %d\n", low);
		++low;
	}

	return 0;
}

void *fibonacci(void *arg)
{
	long int t1 = 2, t2 = 3, nextTerm = 0, n;

	nextTerm = t1 + t2;

	while (nextTerm <= 1000000)
	{
		printf("Fibo: %d\n", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return 0;
}

int main(int argc, char **argv)
{
	pthread_t thread1;
	pthread_t thread2;
	int result1 = pthread_create(&thread1, NULL, prime, NULL);
	int result2 = pthread_create(&thread2, NULL,
								 fibonacci, NULL);
	if (result1 || result2)
	{
		printf("Thread could not be created.");
		exit(1);
	}
	// Wait for the created thread to finish
	result1 = pthread_join(thread1, NULL);
	result2 = pthread_join(thread2, NULL);

	if (result1 || result2)
	{
		printf("The threads could not be joined.\n");
		exit(2);
	}
	return 0;
}