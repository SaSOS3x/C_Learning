#include <stdio.h>
#include <locale.h>

int main(void){

    setlocale(65001, "Russian");

    // Преобразование типов

    char c = 6;
    int d = c;

    printf(""
        "Пример преобразования типов:\n"
        "char c = 6;\n"
        "int d = c;\n"
        "d = %d\n\n" 
    "", d);

    // Явное преобразование типов

    int a = 10;
    int b = 4;
    int c1 = a / b;
    double d1 = a / b;
    double e = (double)a / (double)b; // явное преобразование

    printf(""
        "Явное преобразование типов:\n\n"
        "int a = 10;\n"
        "int b = 4;\n"
        "int c1 = a / b;\n"
        "double d1 = a / b;\n"
        "double e = (double)a / (double)b;\n"
        "c1 = %d\n"
        "d1 = %f\n"
        "e = %f\n\n"
    "", c1, d1, e);

    printf(""
        "Без потери информации подходят следующие цепочки преобразований:\n\n"
        "char -> short -> int -> long\n"
        "unsigned char -> unsigned short -> unsigned int -> unsigned long\n"
        "float -> double -> long double\n\n"
    "");

    int g = 300;
    char ch = g;
    printf("В остальных случаях разрядность усекается:\n\nint 300 -> char\nint g = 300\nchar ch = g\ng = %d\n\n", ch);

    printf("Т.е. 2 байта (16 бит)\nchar - 1 байт (8 бит)\nВ данном случае усекся размер до максимально возможного в char\n\n");

    return 0;
}