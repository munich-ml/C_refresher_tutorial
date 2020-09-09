#include <stdio.h>
#include <string.h>


void main(void){
    char str_org[] = "Hello world";
    printf("str_org: %s\n", str_org);

    int length;
    length = strlen(str_org);
    printf("str_org length: %d\n", length);

    char str_new[length];
    for(int i=0; i<length; i++) {
        str_new[i] = str_org[length-1-i];
    }
    printf("str_new: %s\n", str_new);
}