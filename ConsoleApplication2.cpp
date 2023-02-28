#include <iostream>
#include <stdio.h>
//Проверка оканчивается ли число на 7

int main() 
{
	setlocale(LC_ALL, "Russian");
	printf("Введите целое число\n");
	int number;
	scanf_s("%d", &number);
	number % 10 == 7 ? printf("Число оканчивается на 7") : printf("Число не оканчивается на 7");
	return 0;
}
