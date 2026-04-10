
#include "string_utility.c"
#include "auth.c"
#include "records.c"
#include "file.c"

int main()
{
  if (!login()) {
        return 0;
    }

    int choice;

    do {
        printf("\n=== HOSPITAL MANAGEMENT SYSTEM ===\n");
        printf("1. Add Doctor\n");
        printf("2. View Doctors\n");
        printf("3. Add Patient\n");
        printf("4. View Patients\n");
        printf("5. Book Appointment\n");
        printf("6. View Appointments\n");
        printf("7. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);   // 🔥 IMPORTANT

        switch (choice)
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
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 7);

    return 0;
}

