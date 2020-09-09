#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
#include <math.h>

// max function
int max(int num1, int num2) {
    if (num1 > num2) return num1;
    else return num2;
};


struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;    
};

void main() {
    printf("### functions ###\n");
    int n1 = 4;
    int n2 = 11;
    printf("max(%d, %d) = %d\n", n1, n2, max(n1, n2));


    printf("\n### struct ###\n");
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "John");
    strcpy(student1.major, "engineering");
    printf("%s", student1.name);


    printf("\n\n### while loop ###\n");
    int idx = 0;
    while(idx < 4) {
        printf("while loop at %d\n", idx);
        idx++;
    }
    

    printf("\n\n### for loop ###\n");
    for (int idx = 0; idx<4; idx++) {
        printf("for loop at %d\n", idx);
    }


    printf("\n\n### loop through an array ###\n");
    int numArray[] = {3, 7, 13, 22};

    for (int idx = 0; idx<4; idx++) {
        printf("numArray[%d]=%d\n", idx, numArray[idx]);
    }


    printf("\n\n### 2D arrays ###\n");
    int nums[3][2] = {{ 1,  2},
                      {11, 12},
                      {21, 22}};

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++) {
            printf("nums[i=%d][j=%d] = %d\n", i, j, nums[i][j]);
        }
    }
    
    
    printf("\n\n### Memory address ###\n");
    const int CNT = 3;
    int nums2[CNT];
    printf("Address of variable nums:\n");
    for (int i=0; i<CNT; i++) {
        printf("nums[%d]: '%p'\n", i, &nums2[i]);
    } 

    
    printf("\n\n### pointers ###\n");
    int someInt = 30;           // regular int variable
    int * pSomeInt = &someInt;  // pointer variable storing the address of someInt
    double someDouble = 2.22;
    double * pSomeDouble = &someDouble;
    char someChar = 'a';
    char * pSomeChar = &someChar;

    printf("Addresses: \n");
    printf("%p \n", pSomeInt);
    printf("%p \n", pSomeDouble);
    printf("%p \n", pSomeChar);
    printf("Dereferencing by '*' provides the values: \n");
    printf("%d \n", *pSomeInt);
    printf("%f \n", *pSomeDouble);
    printf("%c \n", *pSomeChar);
    
}
