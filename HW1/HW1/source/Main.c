#include <stdio.h>
#include <stdlib.h>
#include  <time.h>


int main(void)
{
	int face;
	int roll;
	int fre[7] = {0};

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++fre[face];
	}

	printf("%s%17s\n", "face", "frequence");

	for (face = 1; face < 7;face=face+1)
	{
		printf("%4d%17d\n", face, fre[face]);
	}
	system("pause");
	return 0;
}