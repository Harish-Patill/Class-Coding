#include<stdio.h>
#define LARGE(x,y,z) (x>y)?(x>z?x:z):(y>z?y:z);

int main(){
    int a=0;
    int b=0;
    int c=0;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    int large=LARGE(a,b,c);
    printf("The largest of the three: %d\n",large);

    return 0;
}