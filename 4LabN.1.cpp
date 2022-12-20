// 4LabN.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>

void swap(void);
int max;
//int max = -10; для проверки отриц варианта 

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[5] = { 1, -5, 12, 27, -30};
	//int array[5] = { -2, -3, -7, -8 , -500 }; для проверки отриц варика

	for (int i = 0; i < 5; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	printf("Макс число равно = %d\n", max);
	swap();
	printf("Число наоборот = %d\n", max);
	return 0;
}
void swap(void)
{
	if (max > 0)
	{
		max = -max;
	}
	else
	{
		max = max * (-1);
	}
	
}
