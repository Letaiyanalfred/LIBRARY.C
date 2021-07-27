#include <stdio.h>
#include <stdlib.h>


                      int main()
                      {

                        int action;
                        do{
                              printf("**********************************\n");
                              printf("*   WELCOME TO THE KENYA         *\n");
                              printf("*     NATIONAL LIBRARY           *\n");
                              printf("**********************************\n");

                              printf("====================\n");
                              printf("     MAIN MENU      \n");
                              printf("====================\n");
                            printf("1.Add user\n");
                            printf("2.Add book\n");
                            printf("3.Exit\n");
                            scanf("%d",&action);
                            if (action < 1 || action >3) {
                            printf("invalid action.Try again\n");
                           }
                        }while (action < 1 || action > 3);

                      return action;
                     }

