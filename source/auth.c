
#include <stdio.h>
int login ()
{
  char username[50];
  char password[50];
  int attempts = 4;
  while (attempts>0)
  {
    printf("\n=== Login ===\n");
    printf("Enter Username: ");
    scanf(" %[^\n]s", username);
    printf("Enter Password: ");
    scanf(" %[^\n]s", password);
    if(my_strcmp(password,"1234")==0 &&my_strcmp(username,"admin")== 0)
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


