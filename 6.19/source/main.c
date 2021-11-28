#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	int face1;
	int face2;
	int facesSum;
	int roll;
	int freq[13] = {0};
	
	srand(time(NULL));

	for (roll = 1; roll < 36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		facesSum = face1 + face2;
		++freq[facesSum];
	}

	printf("%s%17s\n", "Two Dices Sum", "Frequency");
	for (facesSum = 2; facesSum < 13; facesSum++)
	{
		printf("%13d%17d\n", facesSum, freq[facesSum]);
	}
	system("pause");
	return 0;
}