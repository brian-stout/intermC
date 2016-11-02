#include <stdio.h>
#include <string.h>

const size_t NUMBER_OF_WORDS = 256;

int main(int argc, char *argv[])
{
	if(argc != 2){
		perror("USAGE:  Program <file name>");
		return 1;
	}
	FILE *fp = fopen(argv[1], "r");
	//fopen can return NULL on error
	//NULL we can treat like a false value
	if(!fp){
		perror("Unable to open file for reading");
		return 1;
	}

	char *words[NUMBER_OF_WORDS];
	int counts[NUMBER_OF_WORDS];
	
	int c;
	while(c != EOF){
			c = fgetc(fp);
			printf("%c\n", c);	
	}

	fclose(fp);

}

