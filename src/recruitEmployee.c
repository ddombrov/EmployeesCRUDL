#include "../include/headerA3.h"

void recruitEmployee (struct employee ** headLL) {

    //declare var(s)
    int numDependents = 0;
    char continueMore = 'y';
    char fname[MAX_LENGTH], lname[MAX_LENGTH], tempDependent[MAX_LENGTH];
    int empId = 0;

    //the user enters the first and last name
    printf("Enter a first name: ");
    scanf("%s", fname);
    strcpy((*headLL)->fname, fname);
    printf("Enter a last name: ");
    scanf("%s", lname);
    strcpy((*headLL)->lname, lname);

    //make room for dependents 2D array
    (*headLL)->dependents=malloc(MAX_LENGTH*3);

    //until the user is done entering dependents
    while (continueMore != 'n' || numDependents == 3) {

        //get a y or an n
        do {
            printf("Add a dependent (y or n)?");
            scanf("%c", &continueMore);
        } while (continueMore != 'y' && continueMore != 'n');

        //the user enters the dependent names one by one
        printf("Enter a dependent");
        scanf("%s", tempDependent);

        //make room for the size of the name
        (*headLL)->dependents[numDependents]=malloc(sizeof(tempDependent));
        strcpy((*headLL)->dependents[numDependents], tempDependent);
        numDependents++;

    } //end while

    printf("You have %d dependents", numDependents);

    //calculate empId
    for (int i=0; i<sizeof(fname); i++)
        empId += fname[i];
    empId += strlen(lname);

    //make sure empId is unique
/**    for (int i=0; i<numEmp; i++) {

        if (match)
             empId += rand() % 999 + 1;


    } //end for
**/

    printf("Your computer-generated empID is %d", empId);

    //add their information to the end of the linked list passed as a parameter to this function
    //nextEmployee=determine somehow

} //end recruitEmployees
