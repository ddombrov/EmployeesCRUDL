#include "../include/headerA3.h"

void printAll (struct employee * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;
        printf("\nEmployee # %d: ", curEmpCount);
        printf("\n\tEmployee id: %d", curEmp->empId);
        printf("\n\tFirst name: %s", curEmp->fname);
        printf("\n\tLast name: %s", curEmp->lname);
        printf("\n\tDependents [%d]: ", curEmp-> numDependents);

        for (int i=0; i<(curEmp->numDependents); i++) {
            printf("%s", curEmp->dependents[i]);
            if (i < headLL->numDependents - 1)
                printf(", ");
        }
        
        //go to next employee
        curEmp = curEmp->nextEmployee;

    } //end while

    printf("\nCurrently, there are %d employees.", curEmpCount);

} //end printAll
