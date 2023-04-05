#include "../include/headerA3.h"

int lookOnId (struct employee * headLL, int whichEmpId) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //check if list null
    if (curEmp==NULL) {

        printf("\nThe list is empty");
        return -1;
    }

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;

        //if the id is found
        if(curEmp->empId==whichEmpId)
	    return curEmpCount;

        curEmp = curEmp->nextEmployee;

    } //end while

    return -1;

} //end lookOnId