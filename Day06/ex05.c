#include <stdio.h>

int main(void) {
  
    // 2차원 배열 선언
    int arr[2][3] = { {1,2,3}, {4,5,6} };

    // (int : 4byte) X (6개) = 24 byte
    printf("%d\n", sizeof(arr) / sizeof(int) );
    printf("%d\n", sizeof(arr) / sizeof(arr[0]) ); 
    printf("%d\n", sizeof(arr[0]) / sizeof(int) ); 

    int row = sizeof(arr) / sizeof(arr[0]); // 행의 개수
    int col = sizeof(arr[0]) / sizeof(int); // 열의 개수


    // for(int i = 0 ; i < 반복횟수 ; i++ ) {}
    
    // 바깥 for문   : 행
    for (int i = 0; i < row; i++) {
        // 안 for문 : 열
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}