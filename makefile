proFile: dombrovskyDanielA3.o dombrovskyDanielA2Main.o
	gcc -g -Wall -std=c99 dombrovskyDanielA2.o dombrovskyDanielA2Main.o -o bin/proFile
dombrovskyDanielA2.o: src/dombrovskyDanielA2.c include/dombrovskyDanielA2.h
	gcc -g -Wall -std=c99 -c src/dombrovskyDanielA2.c
dombrovskyDanielA2Main.o: src/dombrovskyDanielA2Main.c include/dombrovskyDanielA2.h
	gcc -g -Wall -std=c99 -c src/dombrovskyDanielA2Main.c
clean:
	rm.*o bin/proFile

