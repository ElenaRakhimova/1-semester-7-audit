#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void name()
{
	char name[] = { 'E','l', 'e','n', 'a', 0 };
	for (int i = 5; i >= 0; i--)
		printf("%c", name[i]);
	printf("\n");
	system("pause");
	return 0;
}