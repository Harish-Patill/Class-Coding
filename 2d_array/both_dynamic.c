#include<stdio.h>
#include<stdlib.h>
void read(int row,int col,int**ptr)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
}
void print(int row,int col,int**ptr)
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
    printf("Enter row and column: ");
    scanf("%d %d",&row,&col);

    int**arr=malloc(row*sizeof(int*));
    for(int i=0;i<row;i++)
    {
        arr[i]=malloc(col*sizeof(int));
    }
    printf("Enter array elements: ");
    read(row,col,arr);

    printf("array elements are: ");
    print(row,col,arr);

    int n_row;
    printf("Enter new row: ");
    scanf("%d",&n_row);
    
    if(n_row < row)
    {
        for(int i=n_row;i<row;i++)
        {
            free(arr[i]);
        }
        realloc(arr,n_row*sizeof(int*));
    }
    else
    {
        realloc(arr,n_row*sizeof(int*));
        for(int i=row;i<n_row;i++)
        {
            arr[i]=malloc(col*sizeof(int));
        }
        printf("Enter new elements: ");
        for(int i=row;i<n_row;i++)
        {
            for(int j=0;j<col;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
    }
    printf("after modifying array elements are: \n");
    print(n_row,col,arr);

}