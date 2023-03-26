#include "../include/dombrovskyDanielA3.h"

int (argc, ** argv) {

    //declare var(s)
    struct employee ** headLL;
    int whichOne;
    int whichEmpId;
    char whichName [100];
    char fileName [MAX_LENGTH];
    a3Emp * headLL;

    //task 1
    recruitEmployee (headLL);

    //
    printAll (headLL);

    //
    printOne (headLL, whichOne);

    //
    someInt = lookOnId (headLL, whichEmpId);

    //
    someInt = lookOnFullName (headLL, whichName);

    //
    sortEmployeesId (headLL);

    //
    loadEmpData (headLL, fileName);

    //
    someInt = countEmployees (a3Emp * headLL);

    //
    fireAll (headLL);

    //
    fireOne (headLL, whichOne);

} //end main
