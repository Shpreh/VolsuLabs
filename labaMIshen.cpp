#include <iostream>
#include <stdio.h>
#include <math.h>

float IsPointIn_Geron(float Ax, float Ay, float Bx, float By, float Cx, float Cy, float Px, float Py);
float SGeron(float Ax, float Ay, float Bx, float By, float Cx, float Cy);
float x, y, Square, Ax, Ay, Bx, By, Cx, Cy;
int main()
{
	setlocale(LC_ALL, "Russian");
	Ax = -10; Ay = -10; Bx = 0; By = 10; Cx = 10; Cy = -10;
	printf("Стрельба по мишеням\nДля выстрела введите x и y\n");
	scanf_s("%f %f", &x,&y);
	if (IsPointIn_Geron(Ax, Ay, Bx, By, Cx, Cy, x, y) == 0)
	{
		printf("Потрясающая меткость, так держать!");
	}
	else
	{
		printf("Повезет в следующий раз");
	}
	(void)getchar();
	return 0;
}
float IsPointIn_Geron(float Ax,float Ay,float Bx,float By,float Cx,float Cy,float Px,float Py)
{
	Square = SGeron(Px, Py, Ax, Ay, Bx, By) + SGeron(Px, Py, Bx, By, Cx, Cy) + SGeron(Px, Py, Cx, Cy, Ax, Ay);
	if((abs(SGeron(Ax, Ay, Bx, By, Cx, Cy) - Square)) <= 0.01)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
float SGeron(float aAx, float aAy, float aBx, float aBy, float aCx, float aCy)
{
	return abs(aBx * aCy - aCx * aBy - aAx * aCy + aCx * aAy + aAx * aBy - aBx * aAy);
}