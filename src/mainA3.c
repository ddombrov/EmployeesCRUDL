#include "../include/headerA3.h"

int main (int argc, char ** argv) {

    //declare var(s)
    struct employee ** headLL;
    int whichOne;
    int whichEmpId;
    char whichName [100];
    char fileName [MAX_LENGTH];
//    a3Emp * headLL;
    int choice = -1;
    int someInt = 0;

    strcpy(fileName,argv[1]);

    //keep going until user wants to exit
    while (choice !=10) {

        //get (valid) choice
        do {

            printf("1. Add a new employee 2. Print data of all employees 3. Print data of the nth employee 4. Search for employee based on empId 5. Search for employee based on full name 6. Count the total number of employees 7. Sort the employees based on their empId 8. Remove the nth employee in the current LL 9. Remove all employees in the current LL 10. Exit");
            scanf("%d", &choice);

        } while (choice > 10 || choice < 1);

        //headLL=createEmpDataFromFile(filePtr);
        loadEmpData(headLL, fileName);
/**
        //do a different task based on the choice
        if (choice == 1) {

            recruitEmployee (headLL);

        } else if (choice == 2) {

            printAll (headLL);

        } else if (choice == 3) {

            printOne (headLL, whichOne);

        } else if (choice == 4) {

            someInt = lookOnId (headLL, whichEmpId);
            printf("%d", someInt);

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
