#include <stdio.h>

int main() {
    #define BOOL char
    #define FALSE 0
    #define TRUE 1
    
    BOOL x = TRUE;
    printf("%d\n",x);

return 0;
}