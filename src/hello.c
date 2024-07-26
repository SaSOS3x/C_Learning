#include <stdio.h>                           //Подключение бибилиотек
#include <locale.h>                          

int main()                                   //Главный метод
{
    char *locate = setlocale(LC_ALL, "");    //Устанавливаем русскую локаль (поддкржка кириллицы)

    printf("Hello C! Привет Си!");
    return 0;                                //Возвращаем 0 - т.к. main() - int (успешное завершение программы)
}