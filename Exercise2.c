/*
* File:			Exercise2.c
* Authors: 		Santeri Pajunen and Jatta Jokinen
* Description:	Getting a random number between 0 and 10000, counting the Collatz sequence of the 
*				number and counting the length of the Collatz sequence, then checking if the length 
*				of the sequence is a prime number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber();
int collatzSequence();
void checkIfPrime();

int main()
{

	checkIfPrime(collatzSequence(randomNumber()));
	
	return 0;
}

int randomNumber()
{
	srand((unsigned)time(NULL)); // initializing the rand() with time as seed
	int random = rand() % 10001; // using the modulus operator to set the range
	printf("Random number: %d\n\n", random);
	return random;
}

int collatzSequence(int n)
{
	int count = 0; 
	
	if(n < 2)
	{
		printf("Cannot count Collatz sequence for this number.\n\n");
	} else 
	{
		printf("%d ", n);
		count++;
		while(n != 1) 
		{
			if(n % 2 == 0) 
			{
				n /= 2;
				printf("%d ", n);
			} else 
			{
				n = (3 * n) + 1;
				printf("%d ", n);
			}
			count++;
		}
		printf("\n\nLength of this Collatz sequence is %d.\n\n", count);
	}
	return count;
}

void checkIfPrime(int length)
{
	int result = 1;
	if (length <= 1) 
	{
		printf("\nNumber %d is not prime.\n\n", length);
	} else if (length % 2 == 0 && length > 2) 
	{
		printf("\nNumber %d is not prime.\n\n", length);
	} else 
	{
		for(int i = 3; i < length / 2; i += 2)
		{
			if (length % i == 0) 
			{
				result = 0;
			} 
		}
		if (result == 0) 
		{
			printf("\nNumber %d is not prime.\n\n", length);
		} else 
		{
			printf("\nNumber %d is prime.\n\n", length);
		}
	}
}
