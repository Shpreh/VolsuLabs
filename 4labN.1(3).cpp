// 4labN.1(3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void searchMax(void);

int sum, countMax;
int array[10] = { -1, 36, -83, 24, 67, -14, -7, -150, 123, 80};//libo 135 vmesto 150 togda tok 1 budet

int main()
{
	for (int i = 0; i < 10; i++)
	{
		sum += array[i];
	}
	searchMax();
	printf("CountMax = %d", countMax);
}
void searchMax(void) 
{
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > sum)
		{
			countMax++;
		}
	}
}
