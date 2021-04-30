#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
void chetnechet()
{
	int mass[10], k = 0;
	srand((unsigned int)time(0));
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 100;
		printf("%d ", mass[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] % 2 == 0)
		{
			k += 1;
			printf("%d ", mass[i]);
		}
	}
	printf("\n");
	printf("%d \n", k);
	system("pause");
	return 0;
}