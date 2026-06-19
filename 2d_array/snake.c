#include <stdio.h>
int main(){
    int row,col;

    printf("Enter the size of row and col: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter the array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Snake pattern:\n");

    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++) {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        else{
            for(int j=col-1;j>=0;j--) {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}