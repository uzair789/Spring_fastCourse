#include <stdio.h>
#include <omp.h>

int main(){
#pragma omp parallel num_threads(4)
    {
    int ID = omp_get_thread_num();
    printf("The thread ID for \'hello\' is: %d,", ID);
    printf("for \'world\' is: %d\n", ID);
}
return 0;
}
