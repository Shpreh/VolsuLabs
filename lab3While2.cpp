// lab3While2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int N, i, count;

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите N\n");
	scanf_s("%d", &N);
	
	do 
	{
		if (i % 3 == 0)
		{
			count++;
		}
		i++;
	} while (i < N);
	
	printf("Количество чисел кратное трем = %d\n", count);
	return 0;
}
