#include "../include/headerA3.h"

void sortEmployeesId (struct employee * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    int lowId=0;
    int tempId=0;
    //struct employee *newEmp = malloc(sizeof(struct employee));
 /**   char fname [MAX_LENGTH];
    char lname [MAX_LENGTH];
    int numDependents [countEmployees(headLL)];
    char dependents [3][MAX_LENGTH];

    char tempFname [MAX_LENGTH];
    char tempLname [MAX_LENGTH];
    int tempNumDependents [countEmployees(headLL)];
    char tempDependents [3][MAX_LENGTH];
**/
    int idArray [countEmployees(headLL)];
    
    struct employee *curEmp = headLL;
    //struct employee *tempEmp;


    //check if list null
    if (curEmp==NULL) {

        printf("\nUnable to sort");
        return;
    }

    //make an array of Ids
    while (curEmp != NULL) {

        idArray[curEmpCount]=curEmp->empId;
        curEmpCount++;
        
        curEmp = curEmp->nextEmployee;

    } //end while

    // order idArray from lowest to greatest
    for (int i = 0; i < countEmployees(headLL); i++) {
        
        lowId = i;
        for (int j=i+1; j<curEmpCount; j++) {

            if (idArray[j] < idArray[lowId])
                lowId = j;

            //"no need to alter the order of the linked list outside of the function"
            tempId=idArray[lowId];
            idArray[lowId]=idArray[i];
            idArray[i]=tempId;

        } //end for

    } //end for

    //go through ordered ids
    for (int z=0; z<countEmployees(headLL); z++) {

        curEmpCount = 0;
        curEmp = headLL;

        //go through the employees
        while (curEmp != NULL) {

            curEmpCount++;

            //if it's the correct employee
            if(idArray[z]==curEmp->empId){

	          printf("\nEmployee # %d: ", curEmpCount);
                printf("\n\tEmployee id: %d", curEmp->empId);
                printf("\n\tFirst name: %s", curEmp->fname);
                printf("\n\tLast name: %s", curEmp->lname);
                printf("\n\tDependents [%d]: ", curEmp->numDependents);

                for (int i=0; i<(curEmp->numDependents); i++) {
                    printf("%s", curEmp->dependents[i]);
                    if (i < headLL->numDependents - 1)
                        printf(", ");
                }

	      } //end if

            curEmp = curEmp->nextEmployee;

        } //end while

    } //end for

} //end sortEmployeesId







