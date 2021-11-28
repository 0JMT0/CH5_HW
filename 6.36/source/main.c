#include <stdio.h>
#include <stdlib.h>

void stringReverse(char *s);

int main(void)
{
	char string[100];

	printf("Enter a string: ");
	scanf_s("%s",&string,100);//scanf_s("%s", s, length);length=自定義的字串長度(避免出錯)
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
		stringReverse(s + 1);//堆疊下一位字元
		printf("%c", *s);
	}
}