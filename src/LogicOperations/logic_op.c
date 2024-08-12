#include <stdio.h>
#include <locale.h>

int print_logic_operations(int state){
    if (state == 1){

        //Тут будут перечисленны способы использования операций сравнения
        printf("Операции сравнения: >, <, <=, >=, ==, !=\n\n");

        int a = 1==2; //0
        int b = (5+3) == 8; //1

        printf("a = 1==2: %d\nb = (5+3) == 8: %d\n\n", a, b);

        //Пример использования логических операций
        printf("Логические операции: !, &&, ||\n\n");

        int c = !2; //0
        int d = !0; //1

        printf("c = !2: %d\nd = !0: %d\n\n", c, d);

        printf("Пример логического выражения:\n\n");

        a = -2 > 5;
        b = 0 < 7;
        c = 0==0;
        d = 0!=0;

        int f = a && b || c;
        int g = -2>5 && 0<7 || 0==0;

        printf("f = a && b || c: %d\ng = -2>5 && 0<7 || 0==0: %d", f, g);

        return 0;
    }else{
        return -1;
    }
}

int main(void){

    setlocale(65001, "Russian"); // Преобразовал символы в кодировку UTF-8

    print_logic_operations(1);

}

