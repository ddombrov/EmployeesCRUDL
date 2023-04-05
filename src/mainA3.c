#include "../include/headerA3.h"

int main (int argc, char ** argv) {

    //declare var(s)
    struct employee * headLL = NULL;
    int whichOne, whichEmpId;
    char whichName [100];
    char fileName [MAX_LENGTH];
    int choice = -1; 
    int empPosition = -1;
    char confirmation = 'y';

    //file stuff
    FILE * file;
    strcpy(fileName,argv[1]);
    file = fopen(fileName, "r");

    if (!file) {
        printf("Failed to open file called %s\n", fileName);
        return 0;

    } //end if

    loadEmpData(&headLL, fileName);

    //keep going until user wants to exit
    while (choice !=10) {

        //get a valid choice from 1 to 10
        fflush(stdin);
        choice=-1;
        do {

            printf("\n\n\n1. Add a new employee \n2. Print data of all employees \n3. Print data of the nth employee \n4. Search for employee based on empId \n5. Search for employee based on full name \n6. Count the total number of employees \n7. Sort the employees based on their empId \n8. Remove the nth employee in the current LL \n9. Remove all employees in the current LL \n10. Exit");
            printf("\nChoose a menu option: ");
//fflush(stdin);
            scanf("%d", &choice);

        } while (choice > 10 || choice < 1);

        //do a different task based on the choice
        if (choice == 1) {

            //add a new employee
            recruitEmployee (&headLL);

        } else if (choice == 2) {

            //display all employees
            printAll (headLL);

        } else if (choice == 3) {
            
	      //search for a specific employee by index
            printf("Enter a position: ");
	      scanf("%d", &whichOne);
	    
            //display employee info if found
            if (whichOne >= 0 && whichOne <= countEmployees(headLL))
                printOne (headLL, whichOne);
	    else
	        printf("\nNot found");

        } else if (choice == 4) {

            //search for a specific employee by id
            printf("Enter an employee ID: ");
            scanf("%d", &whichEmpId);
            empPosition = lookOnId (headLL, whichEmpId);

            //display employee info if found
            if (empPosition != -1)
                printOne(headLL, empPosition);
	      else
		    printf("\nNot found");

        } else if (choice == 5) {

            //search for a specific employee by name
	      printf("Enter the full name of the employee: ");
            scanf("%*c");
            //fflush (stdin);
            //whichName[strlen(whichName)]='\0';
            fgets(whichName, MAX_LENGTH * 2+1, stdin);
            whichName[strlen(whichName)-1]='\0';
            whichOne = lookOnFullName (headLL, whichName);

            //display employee info if found
            if (whichOne != -1)
                printOne(headLL, whichOne);
            else 
		    printf("\nNot found");

        } else if (choice == 6) {

            printf("\nTotal number of employee(s): %d", countEmployees (headLL));

        } else if (choice == 7) {

            sortEmployeesId (headLL);

        } else if (choice == 8) {

            printf("\nCurrently there are %d employee(s)\n", countEmployees (headLL));

            if (countEmployees(headLL) > 0) {

                //get a y or an n
                do {
                    printf("Which employee do you wish to fire – enter a value between 1 and %d: ", countEmployees(headLL));
                    scanf("%d", &whichOne);
                } while (whichOne < 1 || whichOne > countEmployees(headLL));

                fireOne (&headLL, whichOne);
                printf("Employee fired.");
                printf("\nThere are %d employee(s).", countEmployees (headLL));


                
            } else //have this because weird to ask "enter a value between 1 and 0"
                printf("You don't have employees to fire.");

        } else if (choice == 9) {

            if (countEmployees(headLL) > 0) {

            //get a y or an n
            do {
                printf("Are you sure you want to fire everyone: ");
                scanf(" %c", &confirmation);
            } while (confirmation != 'y' && confirmation != 'n');

                if (confirmation == 'y') {
                    fireAll (&headLL);
                    printf("\nAll fired. Linked list is now empty.");
                } else
                    printf("\nFiring all cancelled.");

            } else //have this because weird to ask "are you sure you want to fire when no one there to fire"
                printf("You don't have employees to fire.");

        } //end if

    } //end while

} //end main
