#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sysexits.h>

char *get_movie(void);

int main(void)
{
	char **movie_list = malloc(1 * sizeof(*movie_list));

	if(!movie_list){
		return EX_OSERR;
	}
	

		printf("Enter a movie title: ");
		char *movie = get_movie();
		movie_list[0] = movie;
	
	free(movie);
	free(movie_list);
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
