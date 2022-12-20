// 3labWhile1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int a,sum;

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите а которое <= 400\n");
	scanf_s("%d", &a);
	if (a <= 400)
	{
		while (a <= 400)
		{
			sum += a;
			++a;
		}
		printf("Сумма чисел от a до 400 = %d\n", sum);
	}
	else
	{
		printf("Число а превышает 400\n");
	}
	return 0;
}
 