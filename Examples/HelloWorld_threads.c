// Now with openmp
#include <omp.h>
#include <stdio.h>

int main()
{
#pragma omp parallel
    {
        int D = omp_get_thread_num();
        printf("Hello(%d) ", D);
        printf("World(%d) \n", D);
    }
}
