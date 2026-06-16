#include<stdio.h>
int main(){
    int size,pos;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter position to remove(0 to %d): ",size-1);
    scanf("%d",&pos);

   for(int i=pos; i<size-1;i++){
    arr[i]=arr[i+1];
   }

   size--;

   printf("Array after remove: ");
   for(int i=0; i<size; i++){
    printf("%d ",arr[i]);
   }
}