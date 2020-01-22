/*
File: 			PrimeFactors.c
Authors: 		Jatta Jokinen & Santeri Pajunen
Description:	C Program to find the largest prime factor of a number
*/	

#include <stdio.h>
#include "PrimeFactors.h"


int PrimeFactors(int number) 
{ 

    int maxPrime = 2;
    while ( number > maxPrime) // while number is larger than maxPrime
	{
        if (number % maxPrime == 0) // if number is divisible by maxPrime
		{
            number = number / maxPrime; // set number divided by maxPrime as number
            maxPrime = 2; // set maxPrime as 2
        }
        else
        {
            maxPrime++; // add 1 to maxPrime
        }
        
    }

    return maxPrime;
}


  













