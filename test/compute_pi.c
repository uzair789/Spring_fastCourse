#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omp.h>

static long num_steps = 100000;
double step;

int main(){
    double sum, pi;
    sum = 0;

    step = 1./num_steps;

    int i = 0;
    for (i=0; i<num_steps; ++i){
        sum += 4./(1 + ((i+0.5)*step) * ((i+0.5)*step) );
    }
    pi = step*sum;
    printf("Approximation of pi:%f\n", pi);

    return  0;
}

