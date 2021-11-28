#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[], int e, int l, int r);
void printHeader(int size);
void printRow(const int b[], int size, size_t low, size_t mid, size_t high);



int main(void) 
{	
	int arr[100];
	int key;
	int size = 0;
	int n = 0;
	char y;

	printf("How many number you want to in put?:");
	scanf_s("%d", &n);
	printf("請輸入任意個按照大小排列的數:");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i], 100);
	}

	printf("\n");
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == -858993460)
		{
			size = i;
			break;
		}	
	}

	printf("%s", "Enter the key:");
	scanf_s("%d", &key);
	
	printHeader(size);

	size_t result = binary_search(arr, key, 0, size-1);

	if (result != -1)
	{
		printf("\n%d found at index %d\n", key, result);
		return 0;
	}
	else
	{
		printf("\n%d not found\n", key);
		return -1;
	}
	system("pause");
}

int binary_search(int b[], int e, int l, int r)
{
	int mid = l + (r-1) / 2;
	printRow(b, (r+1) ,l, mid, r);
	if (l > r) 
		return -1;
	if (b[mid] == e)
		return mid;
	else if (b[mid] > e)
		return binary_search(b, e, l, mid - 1);
	else
		return binary_search(b, e, mid + 1, r);
}

void printHeader(int size)
{
	puts("\nIndices:");

	for (int i = 0; i < size; i++)
	{
		printf("%3u ", i);
	}
	puts("");

	for (int i = 1; i <= 4 * size; i++)
	{
		printf("%s", "-");
	}
	puts("");
}

void printRow(const int b[], int size,size_t low, size_t mid, size_t high)
{
	for (int i = 0; i < size; i++)
	{
		if (i<low || i>high)
		{
			printf("%s ", "   ");
		}
		else if (i == mid)
		{
			printf("%3d*", b[i]);
		}
		else
		{
			printf("%3d ", b[i]);
		}
	}
	puts("");
}