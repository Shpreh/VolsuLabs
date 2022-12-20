// 4labN.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int matrix1[3] = { 2, 3, 4 };
    int matrix2[3] = { 1, 4, 6 };
    int matrixRes[3];
    for (int i = 0; i < 3; i++)
    {
        matrixRes[i] = matrix1[i] * matrix2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("matrixRes[%d] = %d\n",i, matrixRes[i]);
    }
    return 0;
}

