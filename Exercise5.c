/* 
File: 			Exercise5.c
Authors: 		Jatta Jokinen & Santeri Pajunen
Description:	A program that gets the user to add information about languages in to a struct and 
				then prints the list of the languages
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


struct languages
{
	char name[20];
	char code[4];
	char family[20];
	char speakers[20];

};

void addLanguage(struct languages *lang, size_t numberOfLang);
void printLanguages(struct languages *lang, size_t size);


int main()
{
	printf("How many languages you want to add? ");
	int noOfLang = 0;
    char inputBuffer[15];
    fgets(inputBuffer, sizeof(inputBuffer), stdin);
	// Check if the user's input is valid
	int lengthOfArgument = strlen(inputBuffer);
	// Remove newline
	inputBuffer[strlen(inputBuffer) - 1] = '\0';

	for(int counter1 = 0; counter1 < lengthOfArgument - 1; counter1++)
	{
		if((isdigit(inputBuffer[counter1])) == 0)
		{
			printf("Given argument is not valid.\n");
			return 0;
		}
	}
	noOfLang = atoi(inputBuffer);


	struct languages *langPtr = NULL;
	langPtr = (struct languages*) malloc (noOfLang * sizeof(struct languages));
	// Check if memory got allocated
    if(langPtr == NULL)
	{
        printf("Failed to allocate memory.");
        return 1;
    }
    addLanguage(langPtr, noOfLang);
    printLanguages(langPtr, noOfLang);
    free(langPtr);
	return 0;
}



void addLanguage(struct languages *lang, size_t noOfLang)
{
    for(size_t i = 0; i < noOfLang; i++)
    {
        printf("Input information for the %ld. language.\n", (i + 1));
        
        //Name
        while(1)
		{
            printf("Enter language name: ");
            fgets(lang->name, sizeof(lang->name), stdin);

            // Remove newline
            if ((strlen(lang->name) > 0) && (lang->name[strlen (lang->name) - 1] == '\n'))
			{
                lang->name[strlen (lang->name) - 1] = '\0';
            }

            // Break from the loop when a name has been given
            if(lang->name[0] != '\0')
			{
                break;
            }

            printf("\nYou must enter a name of the language. Let's try again.\n");
        }

        //Code
        printf("Enter ISO 639-1 code: ");
        fgets(lang->code, sizeof(lang->code), stdin);

        // Remove newline
        if ((strlen(lang->code) > 0) && (lang->code[strlen (lang->code) - 1] == '\n'))
		{
            lang->code[strlen (lang->code) - 1] = '\0';
        }

        // Family
        printf("Enter family: ");
        fgets(lang->family, sizeof(lang->family), stdin);

        // Remove newline
        if ((strlen(lang->family) > 0) && (lang->family[strlen (lang->family) - 1] == '\n'))
		{
            lang->family[strlen (lang->family) - 1] = '\0';
        }
        

		//Speakers
        printf("Enter number of speakers in millions: ");
        fgets(lang->speakers, sizeof(lang->speakers), stdin);

        // Remove newline
        if ((strlen(lang->speakers) > 0) && (lang->speakers[strlen (lang->speakers) - 1] == '\n'))
		{
            lang->speakers[strlen (lang->speakers) - 1] = '\0';
        }
        
        lang++;
    }
    
    return;	
}

void printLanguages(struct languages *lang, size_t size)
{
    printf("\n\n***List of languages***\n\n");
    for(size_t i = 0; i < size; i++)
    {
        printf("Name:\t\t%s\n", lang->name);
        printf("Code:\t\t%s\n", lang->code);
        printf("Family:\t\t%s\n", lang->family);
        printf("Speakers:\t%s millions\n", lang->speakers);
        printf("\n");
        lang++;
    }
    
    return;
}
