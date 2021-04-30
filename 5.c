#include <stdio.h>
#include <stdlib.h>
void record()
{
	FILE* inFile;
	fopen_s(&inFile, "C:\\Users\\rahim\\Desktop\\output.txt", "r+");
	fseek(inFile, 0, SEEK_SET);
	fprintf_s(inFile, "99 \n");
	fclose(inFile);
	system("pause");
	return 0;
}