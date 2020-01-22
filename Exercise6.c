/*
File:			Exercise6.c
Authors: 		Jatta Jokinen & Santeri Pajunen
Description:	A program that checks if a given integer number is a palindrome in both decimal and 				binary number systems or in one of them or neither.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int decimalIsPalindrome(int decimal);
int binaryIsPalindrome(int decimal);

int main()
{
	int decimal = 0;
	printf("Enter an integer to check if it is palindrome or not\n");
	scanf("%d", &decimal);

	int checkDec = decimalIsPalindrome(decimal);
	int checkBin = binaryIsPalindrome(decimal);

	if(checkDec == 1 && checkBin ==1)
	{
		printf(" is a double palindrome.\n");
	}
	else if(checkDec == 0 && checkBin == 0)
	{
		printf(" is not a palindrome.\n");
	}
	else if(checkDec == 1 && checkBin == 0)
	{
		printf(" is a palindrome in decimal system.\n");
	}
	else
	{
		printf(" is a palindrome in binary system.\n");
	}

	return 0;
}

int decimalIsPalindrome(int decimal)
{
	
	int r = 0;
	int tempDecimal = 0;
	tempDecimal = decimal;
 
	while (tempDecimal != 0)
	{
		r = r * 10;
		r = r + tempDecimal%10;
		tempDecimal = tempDecimal/10;
	}

	if (decimal == r)
	{		
		return 1;
	}
	else
	{
		return 0;
	}
}

int binaryIsPalindrome(int decimal)
{
	int tempDec = 0;
	char binary[32];
	int index = 0;

	tempDec = decimal;
	
	while(tempDec != 0)
	{
		binary[index] = (tempDec % 2) + '0';
		tempDec /= 2;
		index++;
	}
	binary[index] = '\0';

	// Reverse the binary value found
	char binInRev[32];
	int begin = 0;
	int end = 0;
	int count = 0;
	
	while (binary[count] != '\0')
	{
		count++;
	}
	end = count -1;

	for ( begin = 0; begin < count; begin++)
	{
		binInRev[begin] = binary[end];
		end--;
	}

	binInRev[begin] = '\0';

	// Convert string to int
	int binaryNumber = atoi(binInRev); 
    printf("Number %d (%d)", decimal, binaryNumber);

	int r = 0;
	int tempBinary = 0;
	tempBinary = binaryNumber;
 
	while (tempBinary != 0)
	{
		r = r * 10;
		r = r + tempBinary%10;
		tempBinary = tempBinary/10;
	}

	if (binaryNumber == r)
	{		
		return 1;
	}
	else
	{
		return 0;
	}
}
