#include <stdio.h>
#include "string.h"
int login ()
{
  char username[50];
  char password[50];
  int atempts = 4;
  while (attempts>0)
  {
    printf("\n=== Login ===\n");
    printf("Enter Username: ");
    scanf("%[^\n]s", username);
    printf("Enter Passwoerd: ");
    scanf("%[^\n]s", password);
    if(strcmp(password,"1234")&&strcmp(username,"admin"))
       {
        printf("Login Sucessfull! \n");
        return 1;
       }
    else {
      attempts--;
      printf("Login Unsucessfull! \n invalid credentials \n You Have %d attempts remaining \n ", attempts);
    }


  }
  printf("Too many incorrect attempts Exiting.. \n");
  return 0;
}
