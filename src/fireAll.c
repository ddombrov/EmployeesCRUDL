#include "../include/headerA3.h"

void fireAll (a3Emp ** headLL) {

    struct employee *curEmp = *headLL;

    while (curEmp != NULL) {

        fireOne(headLL, 1);
        curEmp = *headLL;

    } //end while

} //end fireAll
