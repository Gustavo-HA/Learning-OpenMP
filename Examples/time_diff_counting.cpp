#include <stdio.h>
#include <omp.h>
#include <chrono>
#include <cmath>
#include <iostream>

using namespace std;
using namespace std::chrono;

int main()
{
    int contador;

    // Código secuencial
    auto start1 = high_resolution_clock::now();
    int sum = 0;
    long long n = static_cast<long long>(pow(10, 9));
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    auto final1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(final1 - start1);
    cout << "Tiempo de codigo secuencial, microsegundos: " << duration.count() << endl;

    // Codigo paralelo.
    auto start1 = high_resolution_clock::now();
    int sum = 0;
    long long n = static_cast<long long>(pow(10, 9));

    return 0;
}