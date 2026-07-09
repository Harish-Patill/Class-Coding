#include<stdio.h>
#define SWAP(a,b,c)     \
        c temp=a;       \
        a=b;            \
        b=temp;

int main(){
    float x=0;
    float y=0;

    printf("A: ");
    scanf("%f",&x);
    
    printf("B: ");
    scanf("%f",&y);
    
    SWAP(x,y,float);
    printf("New Val's\n");
    printf("A: %f\n",x);
    printf("B: %f\n",y);


    return 0;
}