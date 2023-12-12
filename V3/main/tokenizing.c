#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

/* Version 1 */
// Separates user input into words by space
void tokenizing(void)
{
	printf("*** Start of Tokenizing Words Demo ***\n");
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
	printf("*** End of Tokenizing Words Demo ***\n\n");


	/* Version 2 */
	// Separates user input into phrases separated by comma
	printf("*** Start of Tokenizing Words Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* nextphrase = NULL;
	int phrasesCounter;
	do
	{
		printf("Type a few phrases seperated by comma(q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);
		phrases[strlen(phrases) - 1] = '\0';
		if (strcmp(phrases, "q") != 0)
		{
			nextphrase = strtok(phrases, ",");
			phrasesCounter = 1;
			while (nextphrase)
			{
				printf("phrase #%d is \'%s\'\n", phrasesCounter++, nextphrase);
				nextphrase = strtok(NULL, " ");
			}
		}
	} while (strcmp(phrases, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");


	/* Version 3 */
	// Separates user input into sentences separated by dot
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char sentences[BUFFER_SIZE];
	char* nextSentence = NULL;
	int sentencesCounter;
	do
	{
		printf("Type a few sentences separated by dot(q - to quit):\n");
		fgets(sentences, BUFFER_SIZE, stdin);
		sentences[strlen(sentences) - 1] = '\0';
		if ((strcmp(sentences, "q") != 0))
		{
			nextSentence = strtok(sentences, ".");
			sentencesCounter = 1;
			while (nextSentence)
			{
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
				nextSentence = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0);
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}



	
