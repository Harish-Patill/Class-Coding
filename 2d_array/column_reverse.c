#include<stdio.h>

int main(){
    int row=0;
    int col=0;

    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&col);
    
    int arr[row][col];
    printf("Enter array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Column elements in reverse:\n");
    for(int i=row-1;i>=0;i--){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}