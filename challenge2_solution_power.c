#include <stdio.h>
#include <math.h>


int check_1(int num) {
    /*
    Checks if num is 2^N
    Comparator *2 solution
    */
    int cmp = 1;
    while (cmp <= num) {
        if (cmp == num) return 1;     // num is 2^N
        cmp *= 2;
    }
    return 0;    // num is not 2^N    
}


int check_2(int num) {
    /*
    Checks if num is 2^N
    log2 solution
    */
    if (num == 0) return 0;

    float log2 = log(num) / log(2);
    if ((log2 - floor(log2)) == 0) return 1;  // num is 2^N

    return 0;                                 // num is not 2^N    
}


int check_3(int num) {
    /*
    Checks if num is 2^N
    Binary evaluation solution
    */
    if (num == 0) return 0;
    if (!(num & (num-1))) return 1;  // num is 2^N
    return 0;                        // num is not 2^N    
}



void main(void) {
    int nums[] = {128, 127, 63, 64, 1, 0};  // int array of test numbers
    int len = sizeof(nums) / sizeof(nums[0]);
    for(int i=0; i<len; i++) {
        printf("num=%d; checks: %d, %d, %d\n", nums[i], check_1(nums[i]), check_2(nums[i]), check_3(nums[i]));
    }
}