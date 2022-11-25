#include <stdio.h>
int main (){
    char str[1000];
    printf("enter string: ");
    scanf("%s", str);
    int len = 0;
    int i;
    int ct = 0;

    while (str[len] != '\0'){
        len += 1;
    }

    for (i = len; i >= 0; i--){
        printf("%c", str[i]);
    }
}