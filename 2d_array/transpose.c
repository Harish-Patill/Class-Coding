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

void transpose(int row, int col, int arr[][col]){
    int temp=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
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

    printf("Enter array elements: ");
    read(row,col,arr);
    
    printf("The array elements are:\n");
    write(row,col,arr);
    
    printf("The array elements after trnaspose:\n");
    transpose(row,col,arr);
    write(row,col,arr);
    

    return 0;
}