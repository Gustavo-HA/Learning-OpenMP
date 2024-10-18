#include <stdio.h>
#include <iostream>
// Openmp
#include <omp.h>

int main()
{
    int nthreads, tid;
    omp_set_num_threads(4);

/* Se hace el fork para generar los hilos y sus propias copias de variables*/
#pragma omp parallel private(tid)
    {
        /*Se obtiene y se imprime el id de los hilos generados*/
        tid = omp_get_thread_num();
        printf("Hola Mundo, soy el hilo numero %d\n", tid);

        /*Unicamente el hilo 0 hace esto*/
        if (tid == 0)
        {
            nthreads = omp_get_num_threads();
            printf("Numero de hilos totales: %d\n", nthreads);
        }
    } /*Todos los hilos se sincronizan y terminan aqui con Join*/
    return 0;
}