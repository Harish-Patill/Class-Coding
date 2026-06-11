#include<stdio.h>
 struct details
 {
    int id;
    char ch;
    float f;
 };

 int main(){

    struct details var1,var2;
    FILE*fp=fopen("hello.txt","w");

    printf("enter id: ");
    scanf("%d",&var1.id);
    printf("enter character: ");
    scanf(" %c",&var1.ch);
    printf("enter float: ");
    scanf("%f",&var1.f);

    fwrite(&var1,sizeof(struct details),1,fp);
    fclose(fp);
    
    fp=fopen("hello.txt","r");
    fread(&var2,sizeof(struct details),1,fp);
    fclose(fp);
    
    printf("\n");
    printf("details from file: \n");
    printf("id:%d\n",var2.id);
    printf("character:%c\n",var2.ch);
    printf("float:%f\n",var2.f);
}