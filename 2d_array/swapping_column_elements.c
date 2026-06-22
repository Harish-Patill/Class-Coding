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

int main(){
    int row=0;
    int col=0;
    int temp=0;

    printf("Enter row: ");
    scanf("%d",&row);

    printf("Enter column: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter array elements:\n");
    read(row,col,arr);
    
    for(int i=0;i<col;i++){
        for(int j=0;j<row/2;j++){
            temp=arr[j][i];
            arr[j][i]=arr[row-j-1][i];
            arr[row-j-1][i]=temp;
        }
    }

    printf("The array elements after column swapping are:\n");
    write(row,col,arr);

    return 0;
}   