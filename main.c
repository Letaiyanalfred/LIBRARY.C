/*project name:Library management System
  author:Alfred Letaiyan
  compiler:CM16
  Date:29th July 2021*/



#include<stdio.h>
#include<stdlib.h>
int choice;
struct user{
    char tel[13];
    int satus;
    int is_book;
};
void action (){
printf(" LIBRARY MANAGEMENT SYSTEM \n\n");

    do{
    printf("**********************************\n");
    printf("*   WELCOME TO THE               *\n");
    printf("*    COUNTY LIBRARY              *\n");
    printf("**********************************\n");

    printf("====================\n");
    printf("     MAIN MENU      \n");
    printf("====================\n");

    printf("LOG IN AS:\n");
    printf("1.Add User\n");
    printf("2.Book\n");
    printf("3.close\n");
    printf("Enter choice(1-3) :");
    scanf("%d",&choice);
    }while(choice <1 || choice >3);

        if(choice==1){
            user();
        }
        else if(choice==2){
            book();
        }

        else if(choice==3){
            close();
        }





};
void user(){
    char fname[10];
    char sname[10];
    char tel[13];
    char details[20];
    int option;
    char password[10];
    password==sname;
    printf("Welcome  user \n");
    printf("enter 1 to create account\n");
    printf("Enter 2 to Log in \n");
    scanf("%d",&option);
    if(option==1){
printf("Enter details to create account\n");

    printf("Firsname:");
    scanf("%s",&fname);
    printf("Secondname:");
    scanf("%s", &sname);
    printf(" your name is %s %s\n",fname,sname);
    printf("Telephone:");
    scanf("%d", &tel);
    printf("create password(enter more than 4 digits and less than 10 digits )\n");
    scanf("%d",password);
    printf("Enter 1 to save password\n");
    printf("Enter 2 to continue\n");



    }
    else if(option==2){
    printf("Enter details to log in\n");

    printf("Firstname:");
    scanf("%s",fname);
    printf("Secondname:");
    scanf("%s",sname);
    printf(" your name is %s %s\n",fname,sname);
    printf("enter password(more than 4 digits and less than 8digits)\n");
    scanf("%d",password);


    }


};
void book(){
    printf("1. Add book\n");
    printf("2. delete book\n");
    printf("3. edit book\n");
    printf("4. lend book\n");
    printf("5. mark returned book\n");



};

void close(){
    printf("Thank you.welcome Again \n");
    _sleep(5000);
    close(0);
};
int main(){
    action();
  /*do{
    printf("**********************************\n");
    printf("*   WELCOME TO THE               *\n");
    printf("*    COUNTY LIBRARY              *\n");
    printf("**********************************\n");

    printf("====================\n");
    printf("     MAIN MENU      \n");
    printf("====================\n");

    printf("LOG IN AS:\n");
    printf("1.Add User\n");
    printf("2.Book\n");
    printf("3.close\n");
    printf("Enter choice(1-3) :");
    scanf("%d",&choice);
    }while(choice <1 || choice >3);

        if(choice==1){
            user();
        }
        else if(choice==2){
            book();
        }

        else if(choice==3){
            close();
        }*/
    return 0;

}
