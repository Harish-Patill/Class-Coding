#include<stdio.h>
void sortingg_each_1D_array(int row,int col, int arr[]){
    int temp=0;
    int min=0;
    int min_index=0;

    for(int i=0;i<col;i++){
        min=arr[i];
        min_index=i;
        for(int j=i+1;j<col;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}

void sortingg(int row, int col,int arr[][col]){
    for(int i=0;i<row;i++){
        sortingg_each_1D_array(row,col,arr[i]);
    }
}

int main(){

    int row=0;
    printf("Enter Row: ");
    scanf("%d",&row);
    
    int col=0;
    printf("Enter Col: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter Array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The Array elements are:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    sortingg(row,col,arr);
    
    
    printf("The Array elements after Sorting:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }





    return 0;
}