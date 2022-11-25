#include <stdio.h>
int main (){
    char str[1000];
    printf("enter string: ");
    scanf("%s", str);
    int len = 0;

    while (str[len] != '\0'){
        len += 1;
    }

    printf("len: %d\n", len);
}