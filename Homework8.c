#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double x;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    double term = x;
    double sum = x;
    int sign = -1; 
    int n = 1;     
    for (int i = 0; i < 6; i++)
    {
        term = term * (x * x) / ((n + 1) * (n + 2));
        term = -term;
        sum += term;
        n += 2; 
    }
    printf("Значение выражения: %lf\n", sum);
}