#include<stdio.h>

int get_nbits(int num,int n){
    int result=0;
    result=(num & (1<<n)-1);

    return result;
}

int main(){
    int num=0;
    int n=0;
    int result=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    printf("Result = %d\n",get_nbits(num,n));

    return 0;
}