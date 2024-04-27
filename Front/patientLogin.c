#include <stdio.h>
#include <string.h>
int main(){
    FILE *file;
    char name[20];
    file=fopen("Patient.txt","r");
    if(file==NULL){
        printf("file Cannot open");
        return -1;
    }
    fgets(name,20,file);
    fclose(file);
    char Name[20];
    Printf("User Name:");
    scanf("%s",Name);
    
return 0;
}