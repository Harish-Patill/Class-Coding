#include<stdio.h>
int main(int count, char *arr[]){
    int i=0;
    printf("Total no of CLA passed: %d\n",count);

    // while (i<count){
    //     printf("%s\n",arr[i]);
    //     i++;
    // }
    
    while (arr[i] != NULL){
        printf("%s\n",arr[i]);
        i++;
    }
    
    return 0;
}