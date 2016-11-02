#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool in_array(int *haystack, size_t sz, int needle);

int main(void)
{
	int haystack[] = {10, 3, 5, 6, 13, 15, 17, 20, 21, 32};
	size_t size_of_hay = 10;
	int needle;

	char buf[16];

	fgets(buf, sizeof(buf), stdin);
	needle = atoi(buf);

	if(in_array(haystack, size_of_hay, needle)){
		printf("%d is in the haystack!\n", needle);
	}
	else{
		printf("%d is not in the haystack! \n", needle);
	}




}

bool in_array(int *haystack, size_t sz, int needle)
{

	for(size_t i = 0; i < sz; ++i){
		if(needle == haystack[i]){
			return true;
		}

	}
	return false;
}
