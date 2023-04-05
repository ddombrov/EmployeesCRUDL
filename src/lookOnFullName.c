#include "../include/headerA3.h"

int lookOnFullName (struct employee * headLL, char whichName [100]) {

    //declare var(s)
    int curEmpCount = 0;
    struct employee *curEmp = headLL;
    char *name = malloc(MAX_LENGTH+1+MAX_LENGTH+1);

    //check if list null
    if (curEmp==NULL) {

        printf("\nThe list is empty");
        return -1;
    }

    //while there are still employees
    while (curEmp != NULL && curEmpCount<countEmployees(headLL)) {

        //put first and last name of employee into name and reset for each employee
        curEmpCount++;
        name[0]='\0';
        strcat(name, curEmp->fname);
        strcat(name, " ");
        strcat(name, curEmp->lname);
        name[strlen(name)]='\0';
        
        //if the names match
        if(strcmp(name, whichName)==0)
	      return curEmpCount;

        curEmp = curEmp->nextEmployee;

    } //end while

    return -1;

} //end lookFullName
