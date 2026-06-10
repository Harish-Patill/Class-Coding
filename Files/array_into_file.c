#include<stdio.h>
int main(){
    int arr[5]={10 ,20, 30, 40, 50};

    FILE *fp=fopen("read.txt","w");
    for(int i=0; i<5;i++){
        fprintf(fp,"%d",arr[i]);
    }
    fclose(fp);
    return 0;

}