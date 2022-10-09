// Lab4_1.c: Обрахунок функції з аналізом вхідних даних.//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <math.h>
#include <conio.h>
double f;
int main(void)
{
	int x, y, z;
	setlocale(LC_CTYPE, "ukr");
	do
	{
		printf("\n Введiть три цiлi числа:");
		printf("\n \t Значення x="); scanf("%d", &x);
		printf("\t Значення y="); scanf("%d", &y);
		printf("\t Значення z="); scanf("%d", &z);
		if (pow(y, 2)*y - z < 0 && (x + y + z) < 0) printf("\n Для заданих значень чисел x= %d, y= %d та z= %d \n неможливо обрахувати корiнь квадратний виразу х^2у-z \n i логарифм з основою 2 виразу x+y+z \n Задайте iншi значення", x, y, z);
		else
		{
			if (pow(y, 2)*y - z < 0) printf("\n Для заданих значень чисел x= %d, y= %d та z= %d \n неможливо обрахувати корiнь квадратний виразу х^2у-z \n Задайте iншi значення \n", x, y, z);
			if ((x + y + z) < 0) printf("\n Для заданих значень чисел x= %d, y= %d та z= %d \n неможливо обрахувати логарифм з основою 2 виразу x+y+z \n Задайте iншi значення \n", x, y, z);
		}
	}
	while (pow(y, 2)*y - z < 0 || (x + y + z) < 0);
	
	f = sqrt(pow(y, 2)*y - z)+log2(x + y + z);
	printf("\n Результат розрахунку функцii при заданих x= %d, y= %d та z= %d становить %.3lf", x, y, z, f);

	int getch(); getch();
	return 0;
}