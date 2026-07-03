#include<stdio.h>

int fun(){
    return 5;
}

void foo(int a, int b){
    printf("%d %d\n", a, b);
}

int main(){
    printf("%p\n", fun);
    printf("%p\n", &fun);
    printf("%d\n", fun());
    printf("%d\n", (&fun)());

    int (*ptr)() = fun;

    printf("using ptr\n");

    printf("%d\n", ptr());
    printf("%d\n", (*ptr)());
    printf("%p\n", *ptr);
    printf("%p\n", ptr);
}