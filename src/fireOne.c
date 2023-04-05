#include "../include/headerA3.h"

void fireOne (a3Emp ** headLL, int whichOne) {

    //declare var(s)
    struct employee *curEmp = *headLL;
    struct employee *prevEmp = NULL;

    //check if list null
    if (curEmp==NULL) {

        printf("\nThe list is empty");
        return;
    }

    //go up until specific employee
    for (int i = 1; i < whichOne; i++) {

        //move curEmp by 1
        prevEmp = curEmp;
        curEmp = curEmp->nextEmployee;
    }

    if (prevEmp == NULL)
        *headLL = curEmp->nextEmployee;
    else

        //make previous employee point to specific employee successor
        prevEmp->nextEmployee = curEmp->nextEmployee;

    free(curEmp->dependents);
    free(curEmp);

} //end fireOne

