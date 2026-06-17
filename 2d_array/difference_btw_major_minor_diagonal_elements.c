#include<stdio.h>
int main(){
    int major_sum=0, minor_sum=0;

    int row=0;
    int col=0;

    printf("Enter Rows: ");
    scanf("%d",&row);

    printf("Enter Columns: ");
    scanf("%d",&col);

    int arr[row][col];
    printf("Enter array elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                major_sum=major_sum+arr[i][j];
            }

            if(i+j==row-1){
                minor_sum=minor_sum+arr[i][j];
            }
        }
    }

    printf("The sum of Major Diagonal Elements: %d\n",major_sum);
    printf("The sum of Minor Diagonal Elements: %d\n",minor_sum);
    printf("The Differnce                     : %d\n",major_sum-minor_sum);

    return 0;
}