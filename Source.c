#include <Windows.h>
#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(0, "Ru");
	int count;
	printf("¬ведите номер задачи: ");
	scanf_s("%d", &count);
	switch (count)
	{
	case 1:
		file();
		break;
	case 2:
		name();
		break;
	case 3:
		random();
		break;
	case 4:
		chetnechet();
		break;
	case 5:
		record();
		break;
	default:
		break;
	}
}