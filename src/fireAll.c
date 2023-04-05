#include "../include/headerA3.h"

void fireAll (a3Emp ** headLL) {

    //declare var(s)
    struct employee *curEmp = *headLL;

    //check if list null
    if (curEmp==NULL) {

        printf("\nThe list is empty");
        return;
    }

    //go through employees
    while (curEmp != NULL) {

        //fire them all
        fireOne(headLL, 1);
        curEmp = *headLL;

    } //end while

} //end fireAll
