#include "../include/headerA3.h"

void sortEmployeesId (struct employee * headLL) {

    //declare var(s)
    int curEmpCount = 0;
    int lowId=0;
    int tempId=0;
    //struct employee *newEmp = malloc(sizeof(struct employee));

    int idArray [countEmployees(headLL)];
    
    struct employee *curEmp = headLL;
    //struct employee *tempEmp;

    //make an array of Ids
    while (curEmp != NULL) {

        idArray[curEmpCount]=curEmp->empId;
        curEmpCount++;
        
        curEmp = curEmp->nextEmployee;

    } //end while


    // order idArray from lowest to greatest
    for (int i = 0; i < countEmployees(headLL); i++) {
        
        lowId = i;
        for (int j=i+1; j<curEmpCount; j++) {

            if (idArray[j] < idArray[lowId])
                lowId = j;

            tempId=idArray[lowId]; 
            idArray[lowId]=idArray[i];
            idArray[i]=tempId;

        } //end for

    } //end for


    //based on the sorted array of Ids, sort the list of employees

} //end sortEmployeesId







