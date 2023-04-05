#include "../include/headerA3.h"

void fireOne (a3Emp ** headLL, int whichOne) {

    struct employee *curEmp = *headLL;
    struct employee *prevEmp = NULL;

    int numEmployees = countEmployees(*headLL);

    if (whichOne < 1 || whichOne > numEmployees) {
        printf("Invalid input. Please enter a number between 1 and %d.\n", numEmployees);
        return;
    }

    // Traverse the linked list to the nth employee
    for (int i = 1; i < whichOne; i++) {
        prevEmp = curEmp;
        curEmp = curEmp->nextEmployee;
    }

    // Update the previous employee's nextEmployee pointer
    if (prevEmp == NULL) {
        // The first employee is being fired
        *headLL = curEmp->nextEmployee;
    } else {
        prevEmp->nextEmployee = curEmp->nextEmployee;
    }

    // Free the memory used by the fired employee
    free(curEmp->dependents);
    free(curEmp);

} //end fireOne

