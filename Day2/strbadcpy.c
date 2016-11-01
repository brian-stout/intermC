#include <stdio.h>
#include <string.h>

void bad_strcpy(char *dst, char *src, size_t sz);

int main(void)
{

	char source[] = "Hello there";
	char destination[16];

	bad_strcpy(destination, source, sizeof(source));

	printf("%s\n", destination);

}

void bad_strcpy(char *dst, char *src, size_t sz)
{
	if(!dst || !src){
		return;
	}
	while(--sz && *src){
		*dst++ = *src++;
	}
	*dst++ = '\0';
}


//while(*dst++ = *src++); 
//Valid code that should never be used
