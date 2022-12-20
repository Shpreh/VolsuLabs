// switchCaseCalculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <stdio.h>

int a, b, result;
char oper;
void Calculate(void);

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Вас приветсвует калькулятор!\nВведите два целых числа\n");
	scanf_s("%d %d", &a, &b);
	(void)getchar();
	printf("Выберите операцию над этими числами: +, -, *, /.\n");
	oper = getchar();
	Calculate();
	return 0;
}
void Calculate(void)
{
	switch (oper)
	{
	case '+':
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
		break;
	case '-':
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
		break;
	case '*':
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
		break;
	case '/':
		if (b != 0)
		{
			result = a / b;
			printf("%d / %d = %d\n", a, b, result);
		}
		else
		{
			printf("На ноль поделить не могу\n");
		}
		break;
	default:
		printf("Что-то пошло не так. Попробуйте ещё раз\n");
		break;
	}
}
