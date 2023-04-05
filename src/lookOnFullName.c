#include "../include/headerA3.h"

int lookOnFullName (struct employee * headLL, char whichName [100]) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;
    char *name = malloc(MAX_LENGTH+1+MAX_LENGTH+1);

    //while there are still employees
    while (curEmp != NULL && curEmpCount<countEmployees(headLL)) {

        //get the full name of the current employee
        name[0]='\0';
        strcpy(name, headLL->fname);
        strcat(name, headLL->lname);

        curEmpCount++;

        //printf("name: %s, given: %s", name, whichName);

        //if the names match
        if(strcmp(name, whichName)==0)
	      return curEmpCount;

        curEmp = curEmp->nextEmployee;

    } //end while

    return -1;

} //end lookFullName
