#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void file()
{
	int mass[10] = { -7, 5, 0, 3, 4, 5, 2, 11, 55, 32 }, max = 0, min = 1000;
	FILE* inFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\output.txt", "w");
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] > max)
			max = mass[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] < min)
			min = mass[i];
	}
	fprintf(inFile, "%d \n", max);
	fprintf(inFile, "%d \n", min);
	printf("\n");
	fclose(inFile);
	system("pause");
	return 0;
}