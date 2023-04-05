#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;

        //if it's the correct employee
        if(curEmpCount==whichOne){

	      printf("\nEmployee # %d: ", curEmpCount);
            printf("\nEmployee id: %d", curEmp->empId);
            printf("\nFirst name: %s", curEmp->fname);
            printf("\nLast name: %s", curEmp->lname);
            printf("\nDependents: ");

            for (int i=0; i<(curEmp->numDependents); i++) {
                printf("%s", curEmp->dependents[i]);
                if (i < headLL->numDependents - 1)
                    printf(", ");
            }

	  } //end if

        curEmp = curEmp->nextEmployee;

    } //end while

} //end printOne
