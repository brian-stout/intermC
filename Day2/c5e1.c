#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <string.h>

enum {NUM_OF_WORDS = 256};

	char *words[NUM_OF_WORDS];
	int counts[NUM_OF_WORDS];

int main(int argc, char *argv[])
{
	if(argc != 2){
		perror("USAGE:  Program <file name>");
		return EX_NOINPUT;
	}
	FILE *fp = fopen(argv[1], "r");
	//fopen can return NULL on error
	//NULL we can treat like a false value
	if(!fp){
		perror("Unable to open file for reading");
		return EX_NOINPUT;
	}

	char buf[256];

	fgets(buf, sizeof(buf), fp);

	char *word = strtok(buf, " \n");

	while(word) {
	printf("%s\n", word);
	word = strtok(NULL, " \n");

	}



	// Prints out all word frequencies
	for(size_t n = 0; n < NUM_OF_WORDS; ++n){
		if(!words[n]){
			break;
		}
		printf("%s: %d\n", words[n], counts[n]);
	}
	fclose(fp);


}

