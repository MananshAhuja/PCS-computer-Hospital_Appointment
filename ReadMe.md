#include <stdio.h>
#include "main.c"
int main ()
{
  int choice;
  int running=1;
  while(running)
 {
  printf("\n===HOSPITAL MANAGEMENT SYSTEM===\n");
  printf("1. Add Doctor \n");
  printf("2. View Doctors \n");
  printf("3. Add Patient \n");
  printf("4. View Patients \n");
  printf("5. Book Appointment \n");
  printf("6. View Appointments \n");
  printf("7. Exit Menu \n");
  printf("Enter Your Choice: ");
  switch(choice)
  {
      case 1:
      add_doc();
      break;
      case 2:
      view_doc();
      break;
      case 3:
      add_patient();
      break;
      case 4:
      view_patient();
      break;
      case 5:
      book_appoint();
      break;
      case 6:
      view_appoint();
      break;
      case 7:
      running=0;
      break;
      default:
      printf("Invalid Choice \n");

  }

 }
  return 0;
}
