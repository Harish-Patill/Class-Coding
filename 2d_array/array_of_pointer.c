#include<stdio.h>
void array_to_pointer(int row, int col, int **arr){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int row=3;
    int col=4;

    int a[4]={1,2,3,4};
    int b[4]={10,20,30,40};
    int c[4]={11,22,33,44};

    int *arr[]={a,b,c};
    array_to_pointer(row,col,arr);
    return 0;
}