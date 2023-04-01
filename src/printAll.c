#include "../include/headerA3.h"

void printAll (struct employee * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;
        printf("Employee # %d: ", curEmpCount);

        printf("\tEmployee id: %d", headLL->empId);
        printf("\tFirst name: %s", headLL->fname);
        printf("\tLast name: %s", headLL->lname);
        printf("\tDependents [%d]: ", headLL-> numDependents);

        for (int i=0; i<(headLL->numDependents); i++) {

            printf("%s", headLL->dependents[i]);

            if (i < headLL->numDependents - 1)
                printf(", ");

        } //end for

        printf("Currently, there are %d employees.", curEmpCount);

        curEmp = curEmp->nextEmployee;

    } //end while

} //end printAll
