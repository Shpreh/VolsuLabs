#include <stdio.h>
#include <math.h>
#include <iostream>

int length(int n);
int is_armstrong(int n);

int main() 
{
    int number;
    setlocale(LC_ALL, "Russian");
   
    printf("Введите целое положительное число\n");
    scanf_s("%d", &number);    
    printf("%s", is_armstrong(number) ? "Данное число является числом армстронга\n" : "Данное число не является числом армстронга\n");
    
    return 0;
}

int length(int n) 
{
    int len = 0;
    while (n) {
        len++;
        n /= 10;
    }

    return len;
}

int is_armstrong(int n) 
{
    int len = length(n), sum = 0;
    int _n = n;

    while (n) {
        sum += pow(n % 10, len);
        n /= 10;
    }

    return sum == _n;
}