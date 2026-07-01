#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[],char *envp[]){
    int i=0;
    while (envp[i] != NULL){

        char *var=strtok(envp[i],"=");
        printf("%s\n",var);
        i++;
    }
    
    return 0;
}