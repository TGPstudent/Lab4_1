// Lab4_1.c: ��������� ������� � ������� ������� �����.//
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
		printf("\n ����i�� ��� �i�i �����:");
		printf("\n \t �������� x="); scanf("%d", &x);
		printf("\t �������� y="); scanf("%d", &y);
		printf("\t �������� z="); scanf("%d", &z);
		if (pow(y, 2)*y - z < 0 && (x + y + z) < 0) printf("\n ��� ������� ������� ����� x= %d, y= %d �� z= %d \n ��������� ���������� ���i�� ���������� ������ �^2�-z \n i �������� � ������� 2 ������ x+y+z \n ������� i��i ��������", x, y, z);
		else
		{
			if (pow(y, 2)*y - z < 0) printf("\n ��� ������� ������� ����� x= %d, y= %d �� z= %d \n ��������� ���������� ���i�� ���������� ������ �^2�-z \n ������� i��i �������� \n", x, y, z);
			if ((x + y + z) < 0) printf("\n ��� ������� ������� ����� x= %d, y= %d �� z= %d \n ��������� ���������� �������� � ������� 2 ������ x+y+z \n ������� i��i �������� \n", x, y, z);
		}
	}
	while (pow(y, 2)*y - z < 0 || (x + y + z) < 0);
	
	f = sqrt(pow(y, 2)*y - z)+log2(x + y + z);
	printf("\n ��������� ���������� �����ii ��� ������� x= %d, y= %d �� z= %d ��������� %.3lf", x, y, z, f);

	int getch(); getch();
	return 0;
}