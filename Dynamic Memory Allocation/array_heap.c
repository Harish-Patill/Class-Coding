#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=0;
    printf("Enter Size: ");
    scanf("%d",&size);

    int *ptr=malloc(size * sizeof(int));
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&ptr[i]);
    }
    
    printf("The array elements are: ");
    for(int i=0;i<size;i++){
        printf("%d ",ptr[i]);
    }

    printf("\n");

    return 0;
}