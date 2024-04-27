#include <stdio.h>
void main(){
    void doctor();
    void patient();
    void management();

    int option;//vriable for take the user iput value
    int function;//variable for another funtion calls in the swith case
    printf("********************************************************\n*----------------------Welcome-------------------------*\n*------------------Medi Care Centre--------------------*\n********************************************************\nwhat Kind of User Are You:\n1. Doctor\n2. Ptient\n3. Management\n\n");
    printf("Enter Option:");
    scanf("%d",&option);

    switch(option){
    case 1:
        doctor();
        break;
    case 2:
        patient();
        break;
    case 3:
        management();
        break;
    default:
        printf("Invalid Option. Try again...");      
}

}
void doctor(){
    int get;//variable get user input
     printf("********************************************************\n*----------------------Welcome-------------------------*\n*------------------Medi Care Centre--------------------*\n********************************************************\n1.Log in\n2.Register\nExite\n\n");
    printf("Select an option: ");
    scanf("%d",&get);

    switch(get){
        case 1:
            logIn();
            break;
        case 2:
            Register();
            break;
        case 3:
            management();
            break;
        default:
            printf("Invalid Option. Try again..."); 
    }
}
void patient(){
    int get;//variable get user input
     printf("********************************************************\n*----------------------Welcome-------------------------*\n*------------------Medi Care Centre--------------------*\n********************************************************\n1.Log in\n2.Register\nExite\n\n");
    printf("Select an option: ");
    scanf("%d",&get);
    
    switch(get){
        case 1:
            logIn();
            break;
        case 2:
            Register();
            break;
        case 3:
            management();
            break;
        default:
            printf("Invalid Option. Try again..."); 
    }

}
void management(){
    int get;//variable get user input
     printf("********************************************************\n*----------------------Welcome-------------------------*\n*------------------Medi Care Centre--------------------*\n********************************************************\n1.Log in\n2.Register\nExite\n\n");
    printf("Select an option: ");
    scanf("%d",&get);
    
    switch(get){
        case 1:
            logIn();
            break;
        case 2:
            Register();
            break;
        case 3:
            management();
            break;
        default:
            printf("Invalid Option. Try again..."); 
    }
}



