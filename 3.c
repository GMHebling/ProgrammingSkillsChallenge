#include <stdio.h>
int main () {
    int i = 1;
    for (i = 1; i <= 100; i++){
        if (i%3 == 0){
            if (i%5 == 0){
                printf("Foobaa\n");
            }
            else{
                printf("Foo\n");
            }
        }
        else if (i%5 == 0)
        {
            printf("Baa\n");
        }
        else {
            printf("%d\n", i);
        }
        
    }
    return 1;
}