#include<stdio.h>
#include<stdlib.h>

int main(int count, char *arr[]){
    int i=1;
    int sum=0;
    
    while (arr[i] != NULL){
        sum=sum+atoi(arr[i]);
        i++;
    }

    printf("The sum is : %d\n",sum);
    
    return 0;
}