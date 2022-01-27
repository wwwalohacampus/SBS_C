#include <stdio.h>

/* 
    EOF(End of File)
    : �ؽ�Ʈ ������ ���� ǥ���ϱ� ���� ���

    getchar() �Է��Լ��� EOF ��ȯ�ϴ� ���
    1. �Լ� ȣ�� ���� : �о���� �����Ͱ� ���� ��
    2. CTRL + Z �� �Է��ϴ� ���

    EOF : �Է��Լ��� ���ؼ� ���� �Է��� �����ϴ� �ǹ�
*/

int main(void) {
  
    int ch;
    while(1) {
        ch = getchar();

        if( ch == EOF )
            break;      // �ݺ��� Ż��

        putchar(ch);
    }

    return 0;
}