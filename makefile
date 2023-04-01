proFile: countEmployees.o fireOne.o lookOnFullName.o mainA3.o printOne.o fireAll.o loadEmpData.o lookOnId.o printAll.o recruitEmployee.o sortEmployeesId.o
	gcc -g -Wall -std=c99 countEmployees.o fireOne.o lookOnFullName.o mainA3.o printOne.o fireAll.o loadEmpData.o lookOnId.o printAll.o recruitEmployee.o sortEmployeesId.o -o bin/proFile
countEmployees.o: src/countEmployees.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/countEmployees.c
fireOne.o: src/fireOne.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/fireOne.c
lookOnFullName.o: src/lookOnFullName.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/lookOnFullName.c
mainA3.o: src/mainA3.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/mainA3.c
printOne.o: src/printOne.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/printOne.c
fireAll.o: src/fireAll.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/fireAll.c
loadEmpData.o: src/loadEmpData.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/loadEmpData.c
lookOnId.o: src/lookOnId.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/lookOnId.c
printAll.o: src/printAll.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/printAll.c
recruitEmployee.o: src/recruitEmployee.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/recruitEmployee.c
sortEmployeesId.o: src/sortEmployeesId.c include/headerA3.h
	gcc -g -Wall -std=c99 -c src/sortEmployeesId.c
clean:
	rm.*o bin/proFile
