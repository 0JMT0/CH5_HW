#include <stdio.h>
#include <stdlib.h>

void stringReverse(char *s);

int main(void)
{
	char string[100];

	printf("Enter a string: ");
	scanf_s("%s",&string,100);//scanf_s("%s", s, length);length=�۩w�q���r�����(�קK�X��)
	printf("Reverse string: ");
	stringReverse(string);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char *s)
{
	if (*s != '\0')
	{
		stringReverse(s + 1);//���|�U�@��r��
		printf("%c", *s);
	}
}