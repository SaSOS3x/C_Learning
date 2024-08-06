#include <stdio.h>

//Функция вывода двоичного представления числа
void print_binary(int num){

    int size = sizeof(num)*8; //количество битов в числе
    for (int i = size - 1 ; i >= 0; --i){
        // Проверяем каждый бит, начиная со старшего
        (num & (1 << i)) ? printf("1") : printf("0");
    }
}

int main(void){
    
    int x = 100;
    int y = ~x;
    y += 1;

    printf("y = %d \n", y);
    print_binary(x);
    printf("\n");
    print_binary(y);

    return 0;
}

