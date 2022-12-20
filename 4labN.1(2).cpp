// 4labN.1(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int array[5] = { 1, 40, 34, 23, 14 };
	for (int i = 0; i < 5; i++)
	{
		if (array[i] % 10 == 4)
		{
			printf("Before = %d\n", array[i]);
			array[i] /= 2;
			printf("After = %d\n", array[i]);
		}
	}
	return 0;
}
