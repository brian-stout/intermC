#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sysexits.h>
#include <stdbool.h>

char *get_movie(void);

int main(void)
{
	size_t list_len = 1;
	char **movie_list = malloc(list_len * sizeof(*movie_list));

	if(!movie_list){
		return EX_OSERR;
	}
	
	do{
		printf("Enter a movie title: ");
		char *movie = get_movie();
		movie_list[list_len - 1] = movie;
		
		++list_len;

		//WRONG BAD BADONG
		//movie_list = realloc(movie_list, list_len * sizeof(*movie_list));

		void *tmp = realloc(movie_list, list_len * sizeof(*movie_list));
		if(tmp){
			movie_list = tmp;
		} 
		else{
			//What to do when shit fails.
			break;
		}
		//Gives programmer a thing to print to
		movie_list[list_len - 1] = NULL;
	} while (movie_list[list_len - 2] && strlen(movie_list[list_len-2]) > 1);

	char **curr_movie = movie_list;
	while(*curr_movie){
		printf("%s", *curr_movie);
		++curr_movie;
	}

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
