#include<stdio.h>

struct employee{                            
    int id;
    char name[50];
    float perc;                                   
};

void scan(struct employee eptr[], int size){          
    for(int i=0;i<size;i++){
        scanf("%d %s %f",&eptr[i].id, eptr[i].name, &eptr[i].perc);
    }
}
void print(struct employee *eptr, int size){          
    
    for(int i=0;i<size;i++){
        printf("%d %s %f\n",eptr[i].id,eptr[i].name,eptr[i].perc);
    }
}

int main(){                      
    int size=0;
    printf("Enter the total number of employees: ");
    scanf("%d",&size);

    struct employee e1[size];

    printf("Enter user id, user name, perc: ");
    scan(e1,size);
    printf("Entered info:\n ");
    print(e1,size);

}
