// OpenMP header
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int ThreadCount, ThreadID;
    #pragma omp parallel private(ThreadCount, ThreadID)
    {
        ThreadID = omp_get_thread_num();
        printf("Hello World from thread = %d\n", ThreadID);
        if (ThreadID == 0) {
            ThreadCount = omp_get_num_threads();
            printf("Number of threads = %d\n", ThreadCount);
        }
    }
}