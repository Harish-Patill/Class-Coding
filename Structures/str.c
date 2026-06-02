#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char name[50];
    float perc;
};

int main(){
    struct student var={10,"Harish",7.70};

    struct student var1;
    
    var1.id=20;
    var1.perc=5.50;
    
    // strcpy(var1.name,"Girish");
    
    // printf("%d\n",var.id);
    // printf("%.2f\n",var.perc);
    // printf("%s\n",var.name);
    
    struct student var2;
    
    scanf("%d %s %f",&var2.id,var.name,&var.perc);
    printf("%d %s %f\n",var.id,var.name,var.perc);
    
    
}