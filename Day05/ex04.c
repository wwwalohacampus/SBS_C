#include <stdio.h>

int main(void) {
  
    // for �ݺ���
    // for( �ʱ�� ; ���ǽ� ; ������ ) {  �ݺ��� ���๮;  }
    for( int i = 1; i <= 10 ; i++ ){
        printf("%d �� �ݺ� �����մϴ�.\n", i);
    }

    printf("\n");

    // 1���� 10������ �հ�
    int sum = 0;
    for( int i = 1; i <= 10 ; i++ ){
        sum += i;
    }
    printf("�հ� : %d\n", sum);
    
    return 0;
}