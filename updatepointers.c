#include <stdio.h>

int main() {
    double flt_num = 123.45;
    double *ptr = &flt_num;

    printf("Original value: %lf\n", flt_num);
    
    *ptr = 543.21;  // Update the value indirectly using the double pointer
    
    printf("Updated value: %lf\n", flt_num);

    return 0;
}
