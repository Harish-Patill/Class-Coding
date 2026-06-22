#include<stdio.h>
void read(int row, int col, int arr[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void write(int row, int col, int arr[][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void swap_1d_array(int row,int col,int arr[]){
    int temp=0;

    for(int i=0;i<col/2;i++){
        temp=arr[i];
        arr[i]=arr[col-i-1];
        arr[col-i-1]=temp;
    }
}

void row_swap(int row,int col,int arr[][col]){
    for(int i=0;i<row;i++){
        swap_1d_array(row,col,arr[i]);
    }
}



int main(){
    int row=0;
    int col=0;

    printf("Enter row: ");
    scanf("%d",&row);

    printf("Enter column: ");
    scanf("%d",&col);

    int arr[row][col];

    printf("Enter array elements:\n");
    read(row,col,arr);
    
    row_swap(row,col,arr);

    printf("The array elements are:\n");
    write(row,col,arr);


    return 0;
}