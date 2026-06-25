#include<stdio.h>
#include<stdlib.h>
void read(int row,int col,int ptr[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
}
void print(int row,int col,int ptr[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("Enter row and col: ");
    scanf("%d %d",&row,&col);

    int(*arr)[col]=malloc(row*sizeof(int[col]));
     
    printf("Enter array element: ");
    read(row,col,arr);

    printf("Array elements are: ");
    print(row,col,arr);

    int n_row;
    printf("enter new row: ");
    scanf("%d",&n_row);

    for(int i=0;i<row;i++)
    {
        realloc(arr,row*sizeof(int[col]));
    }
    if(n_row>row)
    {
        printf("Enter a new elements: ");
        for(int i=row;i<n_row;i++)
        {
            for(int j=0;j<col;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
    }
    printf("After modifying the row: ");
    print(n_row,col,arr);
}