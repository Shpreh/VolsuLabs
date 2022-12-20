#include <iostream>
#include <stdio.h>
#define NumbersMassive 101
int main()
{
	int sum[NumbersMassive] = {0};
	int step = 0;
	int firstNumber, secondNumber,sumNumbers1,sumNumbers2;
	for (int i = 100; i <= 200; i++)
	{
		firstNumber = i;
		secondNumber = i + 1;
		sumNumbers1 = firstNumber + secondNumber;
		sumNumbers2 = firstNumber + firstNumber;
		if (sumNumbers1 % 17 == 0)
		{
			sum[step] = sumNumbers1;
			step++;
		}
		if (sumNumbers2 % 17 == 0)
		{
			sum[step] = sumNumbers2;
			step++;
		}
	}
	for (int s = 0; s < NumbersMassive; s++)
	{
		if (sum[s] > 0)
		{
			printf_s("%d\n", sum[s]);
		}
	}
	(void)getchar();
	return 0;
}