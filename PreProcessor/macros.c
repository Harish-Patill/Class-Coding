#include<stdio.h>
#define size 10
#define HEIGHT 5.5
#define MSG "hello"

int main(){
    int arr[size];
    // int size;     // will give error since the macro and the variable name is same

    printf(MSG);

    char *str = MSG;

    float f = HEIGHT;

    // for(int i = 0; i < size; i++){
    //     scanf("%d", &arr[i]);
    // }

    // for(int i = 0; i < size; i++){
    //     printf("%d", arr[i]);
    // }
}