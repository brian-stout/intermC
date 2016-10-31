#include <stdio.h>
#include <string.h>

int main(void)
{
char *pc;
char lines[10][20];

strcpy(lines[0], "mike");
pc = lines[0];

printf("sizeof(lines):       %ld \n", sizeof(lines));
printf("sizeof(lines[1]):    %ld \n", sizeof(lines[1]));
printf("sizeof(lines[1][3]): %ld \n", sizeof(lines[1][3]));
printf("sizeof(lines[0]):    %ld \n", sizeof(lines[0]));
printf("sizeof(pc):          %ld \n", sizeof(pc));
}
