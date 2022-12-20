#include <iostream>
#include <stdio.h>
#include <math.h>

float compute(float x, float a, float b, float c);

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a, b, c, result;
	printf("Введите x, a, b, c\n");
	scanf_s("%f %f %f %f", &x, &a, &b, &c);
	result = compute(x, a, b, c);
	printf("Результат вычислений = %f", result);
	(void)getchar();
	return 0;

}
float compute(float x, float a, float b, float c)
{
	if (x < 0 && b != 0)
	{
		return (-a * powf(x, 3) - b);
	}
	if (x>0 && b == 0 && x-c != 0) 
	{
		return x - a / x - c;
	}
	if (c != 0 && x != 0)
	{
		return x / c + c / x;
	}
	else
	{
		printf("Довольно интересный ввод. Программа его не смогла распознать");
		return 0;
	}
}