#include<stdio.h>
#include<stdlib.h>
int main(int count, char *arr[]){
    int i=0;

    if(count != 3){
        
        int sum=atoi(arr[1]) + atoi(arr[2]);
        printf("The sum is: %d\n",sum);
    }
    
    printf("Insufficient arguments\n");
    return 0;
}