#include<stdio.h>
int main(){
    int num=0;
    int n=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter number of bits: ");
    scanf("%d",&n);

    if (n > sizeof(int) * 8) {
        n = sizeof(int) * 8;
    }
    
    printf("Binary form of %d: ",num);
    for(int i=n-1;i>=0;i--){
        if((num & (1<<i)) == 0){
            printf("0 ");
        }
        else{
            printf("1 ");
        }
    }
    printf("\n");

    return 0;
}