#include <stdio.h>
#include <string.h>

const int NUMBER_OF_WORDS = 99;
const int WORD_LENGTH = 100;

int insert_word(char words[][WORD_LENGTH + 1], char *current_word, size_t length)
{
	int i = 0;
	for (; i < length; ++i) {
		if (strcmp(words[i], "") == 0) {
			break;
		}
		if (strcmp(words[i], current_word) == 0) {
			return i;
		}
	}
	strcpy(words[i], current_word);
	return i;
}

int main(int argc, char **argv)
{
	char words[NUMBER_OF_WORDS][WORD_LENGTH + 1];
	int counts[NUMBER_OF_WORDS];

	char current_word[WORD_LENGTH];

	int c = 0;
	int count = 0;
	int position = 0;

	FILE *fp = fopen("./test.txt", "r");

	for(int i = 0; i < NUMBER_OF_WORDS; ++i) {
		counts[i] = 0;
		strcpy(words[i], "");
	}

	while ((c = getc(fp)) && c != EOF) {
			if (c == ' ' || c == '\n') {
				current_word[count] = '\0';
				count = 0;
				position = insert_word(words, current_word, NUMBER_OF_WORDS);
				counts[position]+= 1;
				continue;
			}
			current_word[count++] = c;
	}

	for(int i = 0; i < NUMBER_OF_WORDS; ++i) {
		if (strcmp(words[i], "") == 0) {
			break;
		}
		printf("%s:%d\n", words[i], counts[i]);
	}
}
