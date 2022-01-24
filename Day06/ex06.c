#include <stdio.h>

int main(void) {

    int M, N;   // (MxN) 2차원 배열
    printf("M : ");
    scanf("%d", &M);
    getchar();

    printf("N : ");
    scanf("%d", &N);
    getchar();

    int arr[M][N];

    // 입력
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
            getchar();
        }
    }

    // 출력
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
}