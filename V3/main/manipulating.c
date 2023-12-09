#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1

void manipulating(void) {
	printf("*** Start of Concatenating Strings Demo ***\n");
	char string1[BUFFER_SIZE];
	char string2[BUFFER_SIZE];
	do {
		//Prompt for first string
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';
		//if q was entered quit program
		if ((strcmp(string1, "q") != 0)) {
			printf("Type the 2nd string:\n");
			//promt for 2nd string
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			//concatenate string
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	printf("*** End of Concatenating Strings Demo ***\n\n");

	//V2
	printf("***Start of Comparing Strings Demon***\n");
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result;
	do {
		//Receive user input for the 1st string
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);
		//Add an ending NULL to the 1st string
		compare1[strlen(compare1) - 1] = '\0';
		//Check that the user did not input 'q' to quit
		if (strcmp(compare1, "q") != 0) {
			//Receive user input for the 2nd string
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);
			//Add an ending NULL to the 2nd string
			compare2[strlen(compare2) - 1] = '\0';
			result = strcmp(compare1, compare2);
			//Check if the 1st string < than the 2nd string
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			//Check if the strings are equal
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			//Check if the first string is greater than the 2nd string
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);

		}
	} while (strcmp(compare1, "q") != 0);
	printf("*** End of Comparing Strings Demon ***\n\n");
}