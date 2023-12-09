#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "Tokenzing.h"

/* Version 1 */
void tokenizing(void)
{
	/*printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE];
	char* nextWord = NULL;
	int wordsCounter;
	do {
		printf("Type a few words seperated by space  (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) {
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");

			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");*/







	/* Version 2 */
	printf("*** Start of Tokenizing Words Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextphrase = NULL;
	int phrasesCounter;
	do
	{
		printf("Type a few phrases seperated by space  (q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if (strcmp(phrases, "q") != 0)
		{
			nextphrase = strtok(phrases, " ");
			phrasesCounter = 1;
			while (nextphrase)
			{
				printf("phrase #%d is \'%s\'\n", phrasesCounter++, nextphrase);
				nextphrase = strtok(NULL, " ");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");

	return 0;
}



	
