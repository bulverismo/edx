1 - compila a biblioteca : gcc -c weatherio.c -o weatherio.o
2 - adiciona codigos objeto na biblioteca : ar rcs libweather.a weatherstats.o weatherio.o
