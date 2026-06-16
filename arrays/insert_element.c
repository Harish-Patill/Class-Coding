#include<stdio.h>
int main(){
    int size,pos,i;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int value;
    printf("Enter the new value: ");
    scanf("%d",&value);

    printf("Enter the position (0 to %d): ", size);
    scanf("%d", &pos);

    for(int i=size; i>pos; i--){
        arr[i]=arr[i-1];
    }

    arr[pos]=value;
    size++;

   
    printf("Array after insertion: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

}