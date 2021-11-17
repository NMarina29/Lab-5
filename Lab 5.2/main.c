#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <math.h> //Вычисление математических функций
#include <locale.h> //Установка локализации для корректного отображения на экране

int main()
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения
    int A, B, C;

    printf("Введите А: ");
    scanf_s("%i", &A);

    printf("Введите B: ");
    scanf_s("%i", &B);

    printf("Введите C: ");
    scanf_s("%i", &C);

    int AC = abs(C - A);
    int BC = abs(C - B);

    printf("AC = %i BC = %i\n", AC, BC);
    printf("AC + BC = %i", AC + BC);
    return 0;
}