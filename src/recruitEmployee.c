#include "../include/headerA3.h"

void recruitEmployee (struct employee ** headLL) {

    //declare var(s)
    int numDependents = 0;
    char continueMore = 'y';
    char fname[MAX_LENGTH], lname[MAX_LENGTH], tempDependent[MAX_LENGTH];
    int empId = 0;
    int check1=0, newEmpId=0;
    struct employee *curEmp = malloc(sizeof(struct employee));

    //the user enters the first and last name
    printf("Enter a first name: ");
    scanf("%s", fname);
    strcpy((curEmp)->fname, fname);
    printf("Enter a last name: ");
    scanf("%s", lname);
    strcpy((curEmp)->lname, lname);

    //make room for dependents 2D array
    (curEmp)->dependents=malloc(MAX_LENGTH);

    //until the user is done entering dependents
    while (continueMore != 'n') {

        (curEmp)->dependents=realloc((curEmp)->dependents, MAX_LENGTH*(numDependents+1));

        //the user enters the dependent names one by one
        printf("\nEnter the name of dependent %d ", numDependents+1);
        scanf("%s", tempDependent);

        //make room for the size of the name
        (curEmp)->dependents[numDependents]=malloc(sizeof(tempDependent));
        strcpy((curEmp)->dependents[numDependents], tempDependent);
        numDependents++;

        //get a y or an n
        do {
                printf("Do you have any more dependents? ");
                scanf(" %c", &continueMore);
        } while (continueMore != 'y' && continueMore != 'n');

    } //end while

    curEmp->numDependents=numDependents;
    printf("You have %d dependent(s)", numDependents);

    //calculate empId
    for (int i=0; i<strlen(fname); i++)
        empId += fname[i];

    empId += strlen(lname);

    //make sure empId is unique (luckily we're allowed to assume less than 1000 employees)
    do {

        check1=1;
        newEmpId=empId;

        if (lookOnId(*headLL, newEmpId)!=-1)
            newEmpId += rand() % 998 + 1;

        if (lookOnId(*headLL, newEmpId)!=-1) {
            newEmpId += rand() % 998 + 1;
            check1=0;
        }

    } while (check1 == 0);

    //put the unique empId into the employee's info
    curEmp->empId=newEmpId;
    printf("\nYour computer-generated empID is %d", curEmp->empId);

    //integrate employee to start of list
    curEmp->nextEmployee=*headLL;
    *headLL=curEmp;

} //end recruitEmployees
