#include<stdio.h>
#include<string.h>

struct employee{                            
    int id;
    char name[50];
    float salary;
    char email[50];                                   
};

void scan(struct employee *eptr, int size){          
    for(int i=0;i<size;i++){
        scanf("%d %s %f %s",&eptr[i].id, eptr[i].name, &eptr[i].salary,eptr[i].email);
    }
}
void print(struct employee *eptr, int size){          
    for(int i=0;i<size;i++){
        printf("%d %s %f %s\n",eptr[i].id,eptr[i].name,eptr[i].salary,eptr[i].email);
    }
}

void print_specific_id(struct employee *eptr,int size,int target_id){
    int value=0;
    for(int i=0;i<size;i++){
        if(eptr[i].id==target_id){
            printf("User information: ");
            printf("%d %s %.2f %s\n", eptr[i].id, eptr[i].name, eptr[i].salary, eptr[i].email);
            printf("\n");
            value = 1;
            break;
        }
    }
    if(value==0){
        printf("No employee found with ID %d\n", target_id);
        printf("\n");
    }
}

void print_specific_name(struct employee *eptr,int size,char *target_name){
    int value=0;
    for(int i=0;i<size;i++){
        if(strcmp(eptr[i].name, target_name) == 0){
            printf("User information: ");
            printf("%d %s %.2f %s\n", eptr[i].id, eptr[i].name, eptr[i].salary, eptr[i].email);
            printf("\n");
            value = 1;
            break;
        }
    }
    if(value==0){
        printf("No employee found with the name %s\n", target_name);
        printf("\n");
    }
}

int main(){                      
    int size=0;
    int flag=1;
    int option=0;
    int case_option;
    int sub_switch_option=0;

    printf("Enter the total number of employees: ");
    scanf("%d",&size);

    struct employee info[size];

    printf("Enter user id, user name, salary, and email-id:\n");
    scan(info,size);
    
    while(flag){
        printf("\nSelect any of the below options:\n");
        printf("01. Print all Employees data\n02. Print Specific Employe data\n03. Exit\n\nEnter here: ");
        scanf("%d",&option);
        
        switch(option){
            case 1:
                printf("Entered info of all the Employees:\n");
                print(info,size);
                break;
            case 2:
                case_option=1;
                while(case_option){
                    printf("Search using user-id or user-name:\n01 for user-id\n02 for user-name\n03 To Exit\n\n");
                    printf("Enter here: ");
                    scanf("%d",&sub_switch_option);

                    switch(sub_switch_option){
                        case 1:
                            int target_id=0;
                            printf("Enter the target id: ");
                            scanf("%d",&target_id);
                            printf("\n");
                            print_specific_id(info,size,target_id);
                            break;
                            
                        case 2:
                            char target_name[50];
                            printf("Enter the target name: ");
                            scanf("%s",target_name);
                            printf("\n");
                            print_specific_name(info,size,target_name);
                            break;
                        
                        case 3:
                            case_option=0;
                            break;
                        default:
                            printf("Invalid Input\nTry again\n\n");
                            break;
                    }
                }
                break;
            case 3:
                flag=0;
                break;
            default:
                printf("Invalid Input\n");
        }
    }

    return 0;
}