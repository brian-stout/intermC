#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <string.h>

enum {NUM_OF_WORDS = 256};

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

	char *words[NUM_OF_WORDS];
	int counts[NUM_OF_WORDS];
	
	int c;
	while(c != EOF){
			c = fgetc(fp);
			printf("%c\n", c);	
	}

	fclose(fp);

}

