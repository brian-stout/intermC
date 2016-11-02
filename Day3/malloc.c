
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>

char *get_movie(void);

int main(void)
{
	size_t last_idx = 0;
	char **movie_list = malloc((1 + last_idx) * sizeof(*movie_list));
	if(!movie_list) {
		return EX_OSERR;
	}

	movie_list[0] = NULL;

	do {
		++last_idx;
		void *tmp = realloc(movie_list, (1 + last_idx) * sizeof(*movie_list));
		if(tmp) {
			movie_list = tmp;
		} else {
			break;
		}

		movie_list[last_idx] = NULL;

		printf("Enter a movie title: ");
		char *movie = get_movie();
		movie_list[last_idx - 1] = movie;

	} while(movie_list[last_idx - 1] && strlen(movie_list[last_idx - 1]) > 1);

	char **curr_movie = movie_list;
	while(*curr_movie) {
		printf("%s", *curr_movie);
		free(*curr_movie);
		++curr_movie;
	}

	free(movie_list);
}

// Returns a newly-malloc()d section of memory that must be free()d
// by the caller
char *get_movie(void)
{
	char buf[64];
	fgets(buf, sizeof(buf), stdin);

	size_t sz = strlen(buf) + 1;

	char *movie = malloc(sz);
	if(!movie) {
		return NULL;
	}

	buf[strlen(buf) - 1 ] = '\0';
	strncpy(movie, buf, sz);

	return movie;
}
