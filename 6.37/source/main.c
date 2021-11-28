#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int *num, int x, int big);

int main(void)
{
	int size = 0;
	int arr[100];
	printf("How many numbers you want?: ");
	scanf_s("%d",&size);
	printf("\n");
	printf("Numbers you want to input: ");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n");
	printf("The biggest number in array is: %d",recursiveMaximum(arr, size-1, arr[0])); 
	printf("\n");
	system("pause");
	return 0;
}

int recursiveMaximum(int *num,int x,int big)
{
	if (x < 0)
		return big;
	else
	{
		if(big < *num)
			big = *num;
		return recursiveMaximum(++num, --x, big);
	}
}