/* File: Exercise1b.c
 * Authors: Jatta Jokinen and Santeri Pajunen
 * Description: Practicing loops
 */

#include <stdio.h>

/* Do not change these. */
void oddNumbers(int lower, int upper);
void divisibleNumbers();
void sumOfMultiples();


/* Do not change main function at all. */
int main() {

	printf("Print out odd numbers between 40 and 0:\n");

	oddNumbers(0, 40);

	printf("\n\nPrint out numbers divisible by both 2 and 3 between 0 and 100:\n");

	divisibleNumbers();

	printf("\n\nPrint out the sum of multiples of 4 and 7 between 0 and 999:\n");

	sumOfMultiples();

	return 0;

}

void oddNumbers(int lower, int upper) {

 	for(int n = upper; n >= lower; --n)
 	{
		if(n % 2 != 0)
		{
   			printf("%d ", n);
		}
 	}

}

void divisibleNumbers() {

	for(int i = 1; i < 100; i++)
	{
		if((i % 2) == 0 && (i % 3) == 0)
		{
			printf("%d ", i);
		}

	}
}

void sumOfMultiples() {
	
	int sum = 0;

    for (int j = 0; j < 999; j += 4) 
	{
        sum += j;
    }

    for (int j = 0; j < 999; j += 7) 
	{
        if (j % 4 != 0) sum += j;  /* already counted */
    }

    printf("%d\n", sum);
}


