#include<stdio.h>
int main(){
    int num=0;
    int n=0;
    int val=0;
    int new_val=0;

    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Enter number of bits: ");
    scanf("%d",&n);
    
    printf("Enter the value: ");
    scanf("%d",&val);

    new_val=val & ((1<<n)-1);

    num=num & ~((1<<n)-1);

    num = num|new_val;

    printf("Result = %d\n",num);

    return 0;
}