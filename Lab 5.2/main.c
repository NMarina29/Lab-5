#include <stdio.h> //������������ ����/����� �� �����
#include <math.h> //���������� �������������� �������
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main()
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������
    int A, B, C;

    printf("������� �: ");
    scanf_s("%i", &A);

    printf("������� B: ");
    scanf_s("%i", &B);

    printf("������� C: ");
    scanf_s("%i", &C);

    int AC = abs(C - A);
    int BC = abs(C - B);

    printf("AC = %i BC = %i\n", AC, BC);
    printf("AC + BC = %i", AC + BC);
    return 0;
}