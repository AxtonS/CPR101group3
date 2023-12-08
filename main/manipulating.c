#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1

void manipulating(void) {
	printf("*** Start if Concatenating Strings Demo ***\n");
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
}