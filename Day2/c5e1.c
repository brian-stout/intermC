#include <stdio.h>
#include <string.h>

/*
struct word{
	int word_count = 1;
	char word[16];
};
*/



void print_word(int count, char cur[]);

int main(void)
{
	
	FILE *fp = fopen("lol", "r");
	//fopen can return NULL on error
	//NULL we can treat like a false value
	if(!fp){
		perror("Unable to open file for reading");
		return 1;
	}
	int c;
	char cur[10];
	int count = 0;
	while(c = fgetc(fp) && c != EOF){

		if((c == ' ') || c == '\n') || c == EOF)){	
			print_word(count, cur[]);	
		}
		cur[count++] = c;
	}

}

void print_word(int count, char cur[])
{
	for(int i = count; i > 0; --i){
		printf("%c", cur[i]);
	}
	printf("\n");
}

/*
void detect_word(char line[])
{
	for(size_t i = 0; i < strlen(line); ++i){
		printf("%c \n", line[i]);
	}
}
*/

