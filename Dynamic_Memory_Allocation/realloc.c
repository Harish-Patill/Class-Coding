#include<stdio.h>
#include<stdlib.h>
int main(){
    int size=0;
    printf("Enter size: ");
    scanf("%d",&size);

    int *arr=malloc(size * sizeof(int));
    
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int new_size=0;
    printf("Enter new size: ");
    scanf("%d",&new_size);
    
    int *ptr=realloc(arr,new_size);
    if(new_size> size){
        printf("Enter new array elements: ");
        for(int i=size;i<new_size;i++){
            scanf("%d",&ptr[i]);
        }
    }

    for(int i=0;i<new_size;i++){
        printf("%d ",ptr[i]);
    }
    
    return 0;
}