#include <iostream>
#include <stdio.h>
#include <omp.h>

int main()
{
    int x, y = 10, z, tid;

#pragma omp parallel for private(x, tid) firstprivate(y) lastprivate(z)
    for (int i = 0; i < 8; i++)
    {
        tid = omp_get_thread_num();
        x = 10;
        z = i;
        y = y * i;
        printf("tid = %d, x = %d, y = %d, z = %d\n", tid, x, y, z);
    }
    printf("Fin de la ejecucion de la region paralelizada: z = %d\n", z);
    return 0;
}