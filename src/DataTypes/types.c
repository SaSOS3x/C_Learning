#include <stdio.h>
#include <locale.h>

int main(){

    // целочисленные переменные

    start(1);

    int a_numb1 = 38;
    signed int a_numb2 = 2;
    signed a_numb3 = -3;

    printf("numb1 is %d\n", a_numb1);
    printf("numb2 is %d\n", a_numb2);
    printf("numb3 is %d\n", a_numb3);

    suff_int(0);

    return 0;
}

int start(int s_o){

    if (s_o == 1){

        char *locate = setlocale(LC_ALL, "");

        printf("Суффиксы целочисленных типов:\n\nДля каждого типа данных, применяется свой суффикс:\n\n");
        printf("int, long, short - d\n");
        printf("unsigned int, unsighed long, unsigned long long int - u или U\n");
        printf("unsigned long int, unsigned long long int - ul или UL\n");
        printf("long long int - ll или LL\n");
        printf("unsigned long long int - ull или ULL\n\n");

        printf("Для того, чтобы вывести такие числа в консоле, используют следующие спецификаторы:\n\n");
        printf("int, short - d\n");
        printf("unsigned short - hu\n");
        printf("long - ld\n");
        printf("unsigned long - lu\n");
        printf("long long - lld\n");
        printf("unsigned long long - llu\n\n");

        return 0;
    }else{
        return -1;
    }
}

int suff_int(int suff_o){

    if (suff_o == 1){
        unsigned short u_numb1 = 1u;
        unsigned short int u_numb2 = 2u;
        unsigned long int u_numb3 = 3U;
        unsigned long long int u_numb4 = 4U;

        unsigned long int u_numb5 = 5ul;
        unsigned long long int u_numb6 = 6UL;

        unsigned long long u_numb7 = 7ULL;
        unsigned long long int u_numb8 = 8ull;

        long long int ll_numb1 = 1LL;
        long long int ll_numb2 = 2ll;
        long long ll_numb3 = 3LL;

        short s_number1 = 1;
        short int s_number2 = 2;

        long int l_numb1 = 1l;
        long l_numb2 = 2l;

        signed long long sll_numb1 = 1ll;
        signed long long int sll_numb2 = 2ll;

        printf("u_numb1 is %hu\n", u_numb1);
        printf("u_numb2 is %hu\n", u_numb2);
        printf("u_numb3 is %lu\n", u_numb3);
        printf("u_numb4 is %llu\n", u_numb4);

        printf("u_numb5 is %lu\n", u_numb5);
        printf("u_numb6 is %llu\n", u_numb6);

        printf("u_numb7 is %llu\n", u_numb7);
        printf("u_numb8 is %llu\n", u_numb8);

        printf("ll_numb1 is %lld\n", ll_numb1);
        printf("ll_numb2 is %lld\n", ll_numb2);
        printf("ll_numb3 is %lld\n", ll_numb3);

        printf("s_number1 is %d\n", s_number1);
        printf("s_number2 is %d\n", s_number2);

        printf("l_numb1 is %ld\n", l_numb1);
        printf("l_numb2 is %ld\n", l_numb2);

        printf("sll_numb1 is %lld\n", sll_numb1);
        printf("sll_numb2 is %lld\n", sll_numb2);

        return 0;
    }else{
        return -1;
    }
}