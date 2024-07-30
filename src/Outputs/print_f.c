#include <stdio.h>
#include <locale.h>

// Функция printf()
int main(void){

    setlocale(LC_ALL, "");

    important_memory(1);

    printf("\nПример допускаемого форматирования:\n\nВход:\nThe book \\\"Name\\\"\\t Algoritmics\\r %%4.2f \\\\ \n\nВыход:\n");
    
    printf("The book \"Name\"\t Algoritmics\r %4.2f \\ \n\n", 63.8986); // Форматирование вывода

    return 0;
}

int important_memory(int im_o){

    if (im_o == 1){

        printf("Управляющие последовательности функции printf языка программирования Си:\n\n");

        printf("* \\n - перевод на новую строку;\n");
        printf("* \\t - табуляция;\n");
        printf("* \\r - возврат каретки(курсора) в начало строки;\n");
        printf("* \\\\ - обратный слеш;\n");
        printf("* \\' - кавычки;\n");
        printf("* \\\" - двойные кавычки.\n\n");

        printf("Спецификаторы:\n\n");

        printf("* %%c - вывод отдельных символов (char);\n");
        printf("* %%s - вывод строки;\n");
        printf("* %%d - вывод целого числа со знаком (int);\n");
        printf("* %%i - вывод целого числа со знаком (int);\n");
        printf("* %%u - вывод целого положительного числа (unsigned);\n");
        printf("* %%f - вывод числа с плавающей точкой (float, double);\n");
        printf("* %%F - вывод числа с плавающей точкой в верхнем регистре (float, double);\n");
        printf("* %%e - вывод экспоненциального представления числа с плавающей точкой (float, double);\n");
        printf("* %%E - то же самое что и %%e, но в верхнем регистре;\n");
        printf("* %%g - для вывода чисел используется более короткий из форматов %%e или %%f;\n");
        printf("* %%G - то же самое, что и %%g, но в верхнем регистре;\n");
        printf("* %%o - вывод восьиеричного числа без знака;\n");
        printf("* %%x - вывод шестнадцатеричного числа;\n");
        printf("* %%X - вывод шестнадцатеричного числа в верхнем регистре;\n");
        printf("* %%%% - для вывода знака процента.\n\n");

        printf("Модификаторы:\n\n");

        printf("* h - вывод значений \tshort int;\n");
        printf("* l - вывод значений \tlong int и unsigned long int;\n");
        printf("* ll - вывод значений \tlong long int и unsigned long long int;\n");
        printf("* L - вывод значений \tlong double.\n\n");

        printf("Флаги:\n\n");

        printf("* -: указывает, что выравнивание будет идти от левого края (по умолчанию используется выравнивание справа);\n");
        printf("* +: если выводимое значение имеет знак (+ или -), то оно вывводится. Без данного флага знак выводится только в случае отрицательного значения;\n");
        printf("* пробел: вставляет пробел на месте знака перед положительными числами;");
        printf("* #: при использовании со спецификатором \"o\", \"x\", \"X\" значение числа выводится с предшествующими символами 0, 0x или 0X.\nПри использовании со спецификаторами \"f\", \"g\", \"G\" десятичная точка будет выводиться, даже если в числе нет дробной части.\n\n");

        printf("Пример использования флагов:\n\n");

        printf("---------------------------------------------\n\n");

        printf("Вход:\n");
        printf("\"%%d \\n\", 8\n");
        printf("\"%% d \\n\", 8\n");
        printf("\"%%+d \\n\", +8\n");
        printf("\"%%#o \\n\", 8\n");
        printf("\"%%#f \\n\", 8.\n\n");

        printf("\"%%9s %%d \\n\", \"Tom\", 38\n");
        printf("\"%%-9s %%d \\n\", \"Tom\", 38\n\n");
        
        printf("---------------------------------------------\n\n");

        printf("Выход:\n");
        printf("%d \n", 8);
        printf("% d \n", 8);
        printf("%+d \n", +8);
        printf("%#o \n", 8);
        printf("%#f \n\n", 8.);

        printf("%9s %d \n", "Tom", 38);
        printf("%-9s %d \n\n", "Tom", 38);

        printf("---------------------------------------------\n\n");

        return 0;
    }else{
        return -1;
    }
}