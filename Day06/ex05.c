#include <stdio.h>

int main(void) {
  
    // 2���� �迭 ����
    int arr[2][3] = { {1,2,3}, {4,5,6} };

    // (int : 4byte) X (6��) = 24 byte
    printf("%d\n", sizeof(arr) / sizeof(int) );
    printf("%d\n", sizeof(arr) / sizeof(arr[0]) ); 
    printf("%d\n", sizeof(arr[0]) / sizeof(int) ); 

    int row = sizeof(arr) / sizeof(arr[0]); // ���� ����
    int col = sizeof(arr[0]) / sizeof(int); // ���� ����


    // for(int i = 0 ; i < �ݺ�Ƚ�� ; i++ ) {}
    
    // �ٱ� for��   : ��
    for (int i = 0; i < row; i++) {
        // �� for�� : ��
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}