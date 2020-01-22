/*
* File:			Exercise3.c
* Authors: 		Santeri Pajunen and Jatta Jokinen
* Description:	Reading from a file to an array, then adding the numbers without using libraries *				that can handle big numbers.
*/

#define ROW 100
#define COL 50
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int arrayFromFile(int array[ROW][COL]);
void sumOfNumbers(int array[ROW][COL]);

int main()
{
	int numberArray[ROW][COL] = {};

	// Prints the error message if file is not found
	if(arrayFromFile(numberArray) == 1)
	{
		printf("File, from which to load numbers, was not found");
	}

	sumOfNumbers(numberArray);
	
	return 0;
}

int arrayFromFile(int array[ROW][COL])
{
	FILE *filePointer = fopen("Numbers.txt", "r");

	if (filePointer == NULL) // Returns 1 if file is not found.
	{
		return 1;
	}

	int digit;
	int row = 0;
	int col = 0;


	while((digit = fgetc(filePointer)) != EOF)
	{
		
		if((isdigit(digit)) != 0)
		{
			array[row][col] = (digit - '0');                     
			col++;
		}

	}		
	fclose(filePointer);
	

	return 0;
}

void sumOfNumbers(int array[ROW][COL])
{
    int sumTotal[51] = {};
    int sumCol = 0;
    int carry = 0;
    int index = 50;

	// Start counting from the last column
	// so the carried numbers are included where needed
    for(int i = COL - 1; i >= 0; i--)
	{

        sumCol = 0;

        if(carry > 9)
		{
            sumCol = carry % 10;
            carry /= 10;
        }
        else
		{
            sumCol += carry;
        }

        // Go through the same column in every row
        for(int j = 0; j < ROW; j++)
		{
            sumCol += array[j][i];
        }

        sumTotal[index] += (sumCol % 10);

        if(carry + sumCol / 10 > 9)
		{
            carry += sumCol / 10;
        }
        else
		{
            carry = sumCol / 10;
        }
        
		index--;
    }

    sumTotal[index] += carry;

	for(int i = 0; i < 51; i++)
	{
		printf("%d", sumTotal[i]);
	}

    printf("\n");
}
