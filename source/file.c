#include <stdio.h>
void load_doctors() {
    FILE *fp = fopen("doctors.txt", "r");
    struct Doctor d;

    if (fp == NULL) return;

    while (fscanf(fp, "%d %s %s", &d.id, d.name, d.specialization) != EOF) {
        doctors[doctor_count++] = d;
    }

    fclose(fp);
}
void load_patients() {
    FILE *fp = fopen("patients.txt", "r");
    struct Patient p;

    if (fp == NULL) return;

    while (fscanf(fp, "%d %s %d", &p.id, p.name, &p.age) != EOF) {
        patients[patient_count++] = p;
    }

    fclose(fp);
}
void load_patients() {
    FILE *fp = fopen("patients.txt", "r");
    struct Patient p;

    if (fp == NULL) return;

    while (fscanf(fp, "%d %s %d", &p.id, p.name, &p.age) != EOF) {
        patients[patient_count++] = p;
    }

    fclose(fp);
}
void save_doc(struct Doctor d)
{
  FILE *p = fopen("doc.txt", "a");
  if (p == NULL)
  {
    printf("Eror Opening File \n");
    return;
  }
  fprintf(p,"%d %s %s\n",d.id,d.special,d.name);
  fclose(p);
}
void view_doc_file()
{
 FILE *p = fopen("doc.txt", "r");
  struct Doctor d;
  if(p == NULL)
  {
    printf("No Doctor Records Found! \n");
    return;
  }
  printf("\n=== DOCTOR RECORDS(FILE) ===\n");
  while ((fscanf(p,"%d %s %s", &d.id,d.special,d.name)!=EOF))
  {
    printf("\nID: %d", d.id);
    printf("\nName: %s", d.special);
    printf("\nSpecialization: %s", d.name);
  }
  fclose(p);
}
void save_appoint(struct Appointment a)
{
  FILE *p = fopen("Appointments.txt", "a");
  if(p == NULL)
  {
    printf("Error Opening File!\n");
    return;
  }
  fprintf(p,"%d %d %d %s\n",a.app_id,a.pt_id,a.doc_id,a.date );
  fclose(p);
}
