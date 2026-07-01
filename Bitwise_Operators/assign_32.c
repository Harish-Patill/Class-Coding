#include<stdio.h>
int main(){
    int num=0;
    int n=0;
    int m=0;
    
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter 'N': ");
    scanf("%d",&n);

    printf("Enter 'M': ");
    scanf("%d",&m);

    if (num & (1 << n)){
        num = (num & ~(1<<m));
    }
    
    printf("Updated value of num is %d\n",num);

    return 0;
}