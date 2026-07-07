#include<stdio.h>
#define LARGE(x,y) (x>y)?x:y;

int main(){
    int a=0;
    int b=0;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);

    int large=LARGE(a,b);
    printf("The largest of the two: %d\n",large);

    return 0;
}