//Cada semestre, a la materia de Programación se inscriben una cantidad constante de 23 alumnos. El semestre está dividido en 3 progresos. Utilice los conceptos de Arreglos y Funciones para escribir un programa en lenguaje C que permita realizar los siguientes cálculos:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Determinamos y calculmos el promedio de los alumnos del semestre
int promedioAlumnos(int calificaciones[3]) {
    int i;
    int suma = 0;
    for (i = 0; i < 3; i++) {
        ///acumulamos todas las notas de los alumnos
        suma += calificaciones[i];
    }
    return suma / 3;
}

void imprimirPromediosAlumnos(int promediosAlumnos[23]) {
    int i;
    printf("Promedio de notas de cada alumno:\n");
    for (i = 0; i < 23; i++) {
        printf("Alumno %i: %d\n", i + 1, promediosAlumnos[i]);
    }
    printf("\n");
}
