/*
File: 			Exercise4.c
Authors:		Jatta Jokinen & Santeri Pajunen
Description:	Reads the length of an array from user as a command line argument
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "PrimeFactors.h"

int randomNumber();

int main(int argc, char *argv[]) 
{
	srand(time(NULL));
	int lengthOfArray = 0;
	if( argc == 2 )
	{
		int lengthOfArgument = strlen(argv[1]);
		for(int counter1 = 0; counter1 < lengthOfArgument; counter1++)
		{
			if((isdigit(argv[1][counter1])) == 0)
			{
				printf("Given argument is not a number.\n");
				return 0;
			}
		}
		lengthOfArray = atoi(argv[1]); // convert the given argument to a number
	}
	else if( argc > 2 )
	{
		printf("Too many arguments supplied.\n");
	}
	else
	{
		printf("One argument expected.\n");
	}

	int *array = NULL;
	array = (int*) malloc(lengthOfArray * sizeof(int));

	for(int counter2 = 0; counter2 < lengthOfArray; counter2++) // put random number into an array
	{
		*(array + counter2) = randomNumber();
	}


	for(int counter3 = 0; counter3 < lengthOfArray; counter3++)
	{
		
		if(*(array + counter3) == 1 || *(array + counter3) == 0)
		{
			printf("There are no prime factors for %d\n", *(array + counter3));
		}
		else
		{
			printf("The largest prime factor of %d is %d.\n", *(array + counter3), PrimeFactors(*(array + counter3)));
		}	
	}	
	return 0;
}


int randomNumber()
{ 
	int random = rand() % 1000001; 
	return random;
}






