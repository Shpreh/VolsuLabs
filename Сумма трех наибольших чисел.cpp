// Сумма двух наибольших чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <math.h>

float sum;
float sumMaxNumber(float a, float b, float c);

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	printf("Введите 3 числа\n");
	scanf_s("%f %f %f", &a, &b, &c);
	sumMaxNumber(a, b, c);
	printf("%.1f", sum);
	return 0;
}

float sumMaxNumber(float a,float b,float c)
{
	if (a < b && a < c)
	{
		sum = b + c;
	}
	else if (b<c && b<a)
	{
		sum = c + a;
	}
	else if (c < a && c < b) 
	{
		sum = a + b;
	}
	return sum;
}
