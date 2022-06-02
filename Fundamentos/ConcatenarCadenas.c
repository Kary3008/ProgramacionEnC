#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char s1[20];
	char s2[20];
	
	printf("\nIngrese la palabra para s1: ");
	scanf("%s",s1);
	printf("\nIngrese la palabra para s2: ");
	scanf("%s",s2);

	strcat(s1, s2);
	printf("%s",s1);	
}
