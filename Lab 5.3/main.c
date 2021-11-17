#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <math.h> //Вычисление математических функций
#include <locale.h> //Установка локализации для корректного отображения на экране

int main()
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    float A, B, C;
    printf("A:");
    scanf_s("%f", &A);

    printf("B:");
    scanf_s("%f", &B);

    printf("C:");
    scanf_s("%f", &C);

    float AC = abs(A - C);
    printf("AC:%f\n", AC);

    float BC = abs(B - C);
    printf("BC:%f\n", BC);

    printf("AC+BC:%f\n", AC*BC);

    return 0;
}