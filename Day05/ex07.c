#include <stdio.h>

int main(void) {
    int n = 1;
    // for문에서의 무한반복
    for ( ; ; )
    {
        // 종료조건
        if( n == 30 )
            break;

        printf(" n : %d\n", n);
        n++;
        
    }
    
    return 0;
    
}