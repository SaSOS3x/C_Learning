#include <stdio.h>
#include <math.h>

double sum(double a, double b){
    return a + b;
}

double raz(double a, double b){
    return a - b;
}

double multiple(double a, double b){
    return a * b;
}

double division(double a, double b){
    if (b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return NAN;
    }else{
        return a / b;
    }
}

int mod(int a, int b){
    if (b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return NAN;
    }else{
        return a % b;
    }
}

int div(int a, int b){
    if (b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return NAN;
    }else{
        return a / b;
    }
}

int main(void){

    float a = sum(10.4, 5);
    float b = raz(10.4, 5);
    float c = multiple(10.4, 5);

    printf("sum(10.4, 5) -> a = %0.3f\n", a);
    printf("raz(10.4, 5) -> b = %0.3f\n", b);
    printf("multiple(10.4, 5) -> c = %0.3f\n", c);


    float d = division(10.4, 5);
    printf("division(10.4, 5) -> d = %0.3f\n", d);
    

    int e = mod(10, 6);
    printf("mod(10, 7) -> e = %d\n", e);

    int f = div(10,6);
    printf("div(10, 7) -> f = %d\n", f);

    a = 8;
    b = ++a;

    printf("a = %f\nb = %f\n\n", a, b);

    a = 8;
    b = a++;

    printf("a = %f\nb = %f\n\n", a, b);

    a = 8;
    b = --a;

    printf("a = %f\nb = %f\n\n", a, b);

    a = 8;
    b = a--;

    printf("a = %f\nb = %f\n\n", a, b);
    

    return 0;
}