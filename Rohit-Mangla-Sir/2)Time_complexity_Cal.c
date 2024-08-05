#include <stdio.h>
#include <time.h>

int main() {
    clock_t start_time, end_time;
    double cpu_time_used;

    // Record the start time
    start_time = clock();
    // clock() gets the no of clock cycles to that particular moment
    printf("start time is %d\n",start_time);
    // Place your code to measure execution time here
    // For example, let's simulate some computation
    int sum = 0;
    for (int i = 1; i <= 1000000; ++i) {
        sum += i;
    }

    // Record the end time
    end_time = clock();
    printf("end time is %d\n",end_time);
    // Calculate the CPU time used in seconds
    printf("CLOCK PER SEC is %d\n",CLOCKS_PER_SEC);
    cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    printf("Sum: %d\n", sum);
    printf("CPU Time Used: %f seconds\n", cpu_time_used);

    return 0;
}
