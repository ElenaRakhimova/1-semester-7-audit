#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
void random()
{
	int n;
	FILE* inFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\input.txt", "r");
	fscanf_s(inFile, "%d", &n);
	srand((unsigned int)time(0));
	for (int i = 0; i < n; i++) {
		int value = rand() % 100;
		printf("random value (0..99) = %d\n", value);
	}
	printf("\n");
	fclose(inFile);
	system("pause");
	return 0;
}