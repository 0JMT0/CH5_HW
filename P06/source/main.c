#include <stdio.h>
#include <stdlib.h>

int cubeByValue(int n);

int main(void)
{
	int num = 5;

	printf("The original value of number is %d", num);

	num = cubeByValue(num);

	printf("\nThe new value of number is %d\n", num);

	system("pause");
	return 0;
}
int cubeByValue(int n)
{
	return n * n * n;
}