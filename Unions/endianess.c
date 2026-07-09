#include<stdio.h>

union uni{
    int x;
    char ch;
};

int main(){ 
    union uni var;

    var.x=0x12345678;
    if (var.ch == 0x12){
        printf("Big\n");
    }
    else{
        printf("Little\n");

    }
  
    return 0;
}