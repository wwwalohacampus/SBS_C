#include <stdio.h>

int main(void) {
    int n = 1;
    // for�������� ���ѹݺ�
    for ( ; ; )
    {
        // ��������
        if( n == 30 )
            break;

        printf(" n : %d\n", n);
        n++;
        
    }
    
    return 0;
    
}