#include<stdio.h>

struct employee{                            //structure defination
    int id;
    char name[50];
    float salary;                                   
    char email[50];
};

void print(struct employee *eptr){          //function to print

    printf("\nuser id: %d\nuser name: %s\nsalary: %.2f\nuser email: %s\n",eptr->id,eptr->name,eptr->salary,eptr->email);
}

int main(){                                                                 //main function of the file
    struct employee e1;
    printf("Enter user id, user name, salary, and email: ");
    scanf("%d %s %f %s",&e1.id,e1.name,&e1.salary,e1.email);
    print(&e1);

}
