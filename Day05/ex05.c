#include <stdio.h>

int main(void) {
    // ��ø for �� �ۼ��ϱ�    
    // ������ ����ϱ�

    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }
    
    return 0;
}