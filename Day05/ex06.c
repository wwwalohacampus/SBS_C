#include <stdio.h>

int main(void) {
    // ¦���� �հ踦 ���Ͻÿ�.
    int sum = 0;
    for (int i = 1; i <= 20; i++) {

        // Ȧ���� ���
        if( i % 2 == 1 ) {
            continue;
        }
        sum += i;

        printf("%d", i);
        if( i != 20 )
            printf("+");
        
    }
    printf("=%d\n", sum);

    return 0;
}