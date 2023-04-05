#include "../include/headerA3.h"

int countEmployees (a3Emp * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;

    //while there are still employees
    while (curEmp != NULL) {

        curEmpCount++;
        
        curEmp = curEmp->nextEmployee;

    } //end while

    return curEmpCount;

} //end countEmployees