#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *get_movie(void);

int main(void)
{
	printf("Enter a movie title: ");
	char *first = get_movie();

	printf("Enter a movie title: ");
	char *second = get_movie();

	printf("%s", first);
	printf("%s", second);

	free(first);
	free(second);
}


//Returns a newly malloc()'d section of memory that much be free()'d 
// By the caller
char *get_movie(void)
{
	char buf[64];
	fgets(buf, sizeof(buf), stdin);

	size_t sz = strlen(buf) + 1;

	char *movie = malloc(sz);
	if(!movie){
		return NULL;
	}

	strncpy(movie, buf, sz);

	return movie;
}
