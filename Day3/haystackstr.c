#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool in_array(char *haystack[], size_t sz, char *needle);

int main(void)
{
	char word1[] = "Goodbye";
	char word2[] = "and";
	char word3[] = "thanks";
	char word4[] = "for";
	char word5[] = "all";
	char word6[] = "the";
	char word7[] = "fish";
	char *haystack[] = {word1, word2, word3, word4, word5, word6, word7};

	size_t size_of_hay = 7;

	char needle[16];

	fgets(needle, sizeof(needle), stdin);
	needle[strlen(needle) - 1] = '\0';

	if(in_array(haystack, size_of_hay, needle)){
		printf("%s is in the hay stack\n", needle);
	}
	else{
		printf("%s is not in the hay stack\n", needle);
	}
		
	



}

bool in_array(char *haystack[], size_t sz, char *needle)
{

	for(size_t i = 0; i < sz; ++i){
		if(strncmp(haystack[i], needle, strlen(needle)) == 0){
			return true;
		}	
	}
	return false;
}


/*
char *get_string(void)
{
	char buf[64];
	fgets(buf, sizeof(buf), stdin);

	size_t sz = strlen(buf) + 1;

	char *string = malloc(sz);
	if(!string) {
		return NULL;
	}

	buf[strlen(buf) - 1 ] = '\0';
	strncpy(string, buf, sz);

	return string;
}
*/
