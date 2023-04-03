#include "../include/headerA3.h"

int main (int argc, char ** argv) {

    //declare var(s)
    struct employee * headLL = NULL;
    int whichOne;
    int whichEmpId;
    char whichName [100];
    char fileName [MAX_LENGTH];
//    a3Emp * headLL;
    int choice = -1;
    int someInt = 0;
    int empPosition = -1;
/**
    //file stuff
    FILE * file;
    strcpy(fileName,argv[1]);
    file = fopen(fileName, "r");
    if (!file) {
        printf("Failed to open file called %s\n", fileName);
        return 0;

    } //end if
**/
    //keep going until user wants to exit
    while (choice !=10) {

        //get (valid) choice
        do {

            printf("\n1. Add a new employee \n2. Print data of all employees \n3. Print data of the nth employee \n4. Search for employee based on empId \n5. Search for employee based on full name \n6. Count the total number of employees \n7. Sort the employees based on their empId \n8. Remove the nth employee in the current LL \n9. Remove all employees in the current LL \n10. Exit");
            printf("\nChoose a menu option: ");
            scanf("%d", &choice);

        } while (choice > 10 || choice < 1);


        //headLL=createEmpDataFromFile(filePtr);
        loadEmpData(&headLL, "proFile.txt");

        //do a different task based on the choice
        if (choice == 1) {

            recruitEmployee (&headLL);

        }

        else if (choice == 2) {
            printf("hi");
            printAll (headLL);

        }/** else if (choice == 3) {

            printf("Enter a position: ");
            scanf("%d", &whichOne);
            printOne (*headLL, whichOne);

        } else if (choice == 4) {

            empPosition = lookOnId (headLL, whichEmpId);

            if (empPosition != -1) {

                printf("%d", empPosition);
                printOne(*headLL, empPosition);

            } //end if

        } else if (choice == 5) {

            someInt = lookOnFullName (headLL, whichName);
            printf("%d", someInt);

        } else if (choice == 6) {

            sortEmployeesId (headLL);

        } else if (choice == 7) {

            loadEmpData (headLL, fileName);

        } else if (choice == 8) {

            someInt = countEmployees (a3Emp * headLL);
            printf("%d", someInt);

        } else if (choice == 9) {

            fireAll (headLL);

        } //end if
**/
    } //end while

} //end main
