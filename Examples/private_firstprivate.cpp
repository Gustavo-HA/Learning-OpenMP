#include <iostream>
#include <stdio.h>
#include <omp.h>

int main()
{
    int x, tid, y = 3, z;
    omp_set_num_threads(4);

#pragma omp parallel private(x, z) firstprivate(y)
    {
        tid = omp_get_thread_num();
        z = tid;
        x = 123 * y;
        printf("Hola, soy el hilo %d: x = %d, y = %d, z = %d\n", tid, x, y, z);
    }

    // Veamos el valor de las tres variables.
    printf("%d, %d, %d\n", x, y, z);
    return 0;
}