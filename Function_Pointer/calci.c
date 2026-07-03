#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int calci(int a, int b, int (*ptr)(int, int)){
    return ptr(a, b);
}

int main(){
    int x=10, y=5;

    printf("%d\n", calci(x, y, add));
    printf("%d\n", calci(x, y, mul));
}