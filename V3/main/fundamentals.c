#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

#include "fundamentals.h"

// Takes a string input from user, then an index number and returns the character at that index of the string
void fundamentals() {
/* Version 1 */
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t position;
	do
	{
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';
		if (strcmp(buffer1, "q") != 0)
		{
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);
			if (position >= strlen(buffer1))
			{
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");

	/* Version 2 */
	// Measures the length of a string
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];
	do {
		printf("Type a string (q - to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';
		if (strcmp(buffer2, "q") != 0)
			printf("The length of \'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));
	} while (strcmp(buffer2, "q") != 0);
	printf("*** End of Measuring Strings Demo ***\n\n");

	/* Version 3 */
	// Copies one string to another
	printf("*** Start of Copying Strings Demo ***\n");
	char destination[BUFFER_SIZE];
	char source[BUFFER_SIZE];
	do
	{
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);
		source[strlen(source) - 1] = '\0';
		if (strcmp(source, "q") != 0)
		{
			strcpy(destination, source);
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0);
	printf("*** End of copying Strings Demo ***\n\n");
}