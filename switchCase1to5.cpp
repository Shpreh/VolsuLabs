// switchCase1to5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

int number;
void rusToEng(void);

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Введите число от 1 до 5\n");
    scanf_s("%d", &number);
    rusToEng();
    return 0;
}
void rusToEng(void)
{
    switch (number)
    {
    case 1: 
    {
        printf("На английском будет One");
        break;
    }
    case 2:
    {
        printf("На английском будет Two");
        break;
    }
    case 3:
    {
        printf("На английском будет Three");
        break;
    }
    case 4:
    {
        printf("На английском будет Four");
        break;
    }
    case 5:
    {
        printf("На английском будет Five");
        break;
    }
    default:
        printf("Что-то пошло не так перезапустите и попробуйте ещё раз");
        break;
    }
}