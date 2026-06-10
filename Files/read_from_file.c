#include<stdio.h>
int main(){
    
    int arr[100];
    int n=0;
    FILE *fp=fopen("read.txt","r");

    while(fscanf(fp,"%d",&arr[n])==1){
        n++;
    }
    for(int i=0; i<n;i++){
        fprintf(fp,"%d",arr[i]);
    }
    fclose(fp);
    printf("Array elements: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;

}