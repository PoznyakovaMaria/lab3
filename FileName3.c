#include <locale.h>
#include <stdio.h>
#define D 2.54
#define U 2,32166
int main()
{
    int num, nm;
    setlocale(LC_ALL, "RUS");
    puts("������� �����");
    scanf_s("%d", &num);
    puts("������� ����� A");
    puts("������� �����");
    scanf_s("%d", &nm);
    puts("������� ����� �");
    printf("%d + %d = %d\n", num, nm, num + nm);
    printf("%d - %d = %d\n", num, nm, num - nm);
    printf("%d * %d = %d\n", num, nm, num * nm);
    printf("%d / %d = %d, ������� = %d\n", num, nm, num / nm, num % nm);
    int dym;
    float result;
    puts("������� �������� ��� �������");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d ������ - ��� %.1f ��\n", dym, result);
    int spdym;
    float result2;
    puts("������� �������� ��� �������");
    scanf_s("%d", &spdym);
    result2 = U * spdym;
    printf("%d ��������� ������ - ��� %.1f ��\n", spdym, result2);
    int a, b;
    puts("������� �����");
    scanf_s("%d", &a);
    puts("������� ����� a");
    puts("������� �����");
    scanf_s("%d", &b);
    puts("������� ����� b");
    puts("-------------------");
    puts("| a*b | a+b | a-b |");
    puts("-------------------");
    printf("| %d*%d | %d+%d | %d-%d |\n",a,b,a,b,a,b);
    puts("-------------------");
    printf("| %d |  %d  |  %d  |\n", a*b, a+b, a-b);
    puts("-------------------");
}