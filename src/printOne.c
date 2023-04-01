#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;

        if (curEmpCount==whichOne) {

            printf("Employee # %d: ", curEmpCount);

            printf("Employee id: %d", headLL->empId);
            printf("First name: %s", headLL->fname);
            printf("Last name: %s", headLL->lname);
            printf("Dependents: ");

            for (int i=0; i<(headLL->numDependents); i++) {

                printf("%s", headLL->dependents[i]);

                if (i < headLL->numDependents - 1)
                    printf(", ");

            } //end for

        } //end if

    //    printf("Currently, there are %d employees.", curEmpCount);

        curEmp = curEmp->nextEmployee;

    } //end while

}
