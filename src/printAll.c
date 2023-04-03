#include "../include/headerA3.h"

void printAll (struct employee * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {
        printf(":)\n");
        curEmpCount++;
        printf("Employee # %d: ", curEmpCount);

        printf("\tEmployee id: %d", curEmp->empId);
        printf("\tFirst name: %s", curEmp->fname);
        printf("\tLast name: %s", curEmp->lname);
        printf("\tDependents [%d]: ", curEmp-> numDependents);

        for (int i=0; i<(curEmp->numDependents); i++) {

            printf("%s", curEmp->dependents[i]);

            if (i < headLL->numDependents - 1)
                printf(", ");

        } //end for

        printf("Currently, there are %d employees.", curEmpCount);

        curEmp = curEmp->nextEmployee;

    } //end while

} //end printAll
