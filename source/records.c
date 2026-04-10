#include <stdio.h>

struct Doctor 
{
  int id;
  char name[101];
  char special[101];
};
struct Patient
{
  int id;
  char name[101];
  int age;
};
struct Appointment
{
  int app_id;
  int pt_id;
  int doc_id;
  char date[20];
};
struct Doctor doc[100];
struct Patient Patients[100];
struct Appointment appointments[100];
int doc_count =0;
int patient_count = 0;
int appoint_count = 0;
void add_doc()
{
  struct Doctor d;
  printf("Enter Doctor ID: ");
  scanf(" %d", &d.id);
  printf("Enter Doctor Name: ");
  scanf(" %[^\n]s", d.name);
  printf("Enter Specialization: ");
  scanf(" %[^\n]s", d.special);
  doc[doc_count]= d;
  doc_count++;
  printf("Doctor added sucessfully! \n");
};
void add_patient()
{ 
  struct Patient p;
  printf("Enter Patient ID: ");
  scanf(" %d",&p.id);
  printf("Enter Name of the Patient: ");
  scanf(" %[^\n]s", p.name);
  printf("Enter the Age: ");
  scanf(" %d", &p.age);
  Patients[patient_count]=p;
  patient_count++;
  printf("Pateint addede sucessfully! \n");
};
void book_appoint()
{
  struct Appointment a;
  printf("Enter Appointment ID: ");
  scanf(" %d", &a.app_id);
  printf("Enter Patient ID: ");
  scanf(" %d", &a.pt_id);
  printf("Enter Doctor ID: ");
  scanf(" %d", &a.doc_id);
  printf("Enter Date of Appointment: ");
  scanf(" %[^\n]c",a.date);
  appointments[appoint_count] = a;
  appoint_count++;
  printf("Appointment Booked Sucessfully ! \n");
}
void view_doc()
{
  int i;
  if(doc_count==0)
  {
    printf("No Doctors Availibe. \n");
    return;
  }
  for(i=0;i<doc_count;i++)
  {
    printf("\nID: %d", doc[i].id);
    printf("\nName: %s", doc[i].name);
    printf("\nSpecialization: %s \n",doc[i].special);
  }
}
void view_patient()
{
  int i;
  if(patient_count == 0)
  {
    printf("No Patients availible. \n");
    return;
  }
  for(i=0;i<patient_count;i++)
  {
    printf("\nID: %d", Patients[i].id);
    printf("\nName: %s", Patients[i].name);
    printf("\nAge: %d\n", Patients[i].age); 
  }
}
void view_appoint()
{
  int i;
  if(appoint_count==0)
  {
    printf("No Appointments Scheduled");
    return;
  }
   printf("\n===APPOINTMENT LIST===\n");
  for(i=0;i<appoint_count;i++)
  {
    printf("\nApointment ID: %d", appointments[i].app_id);
    printf("\nDoctor ID: %d", appointments[i].doc_id);
    printf("\nPatient ID: %d", appointments[i].pt_id);
    printf("\nDate of Appointment: %s", appointments[i].date);
  }
}

