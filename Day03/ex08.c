#include <stdio.h>
// 비교 연산자
int main(void) {
    int a = 10;
    int b = 11;
    // 비교 연산 시, 결과 참이면 1, 거짓이면 0
    printf("a == b : %d\n", a == b );       // a와 b가 같으면 1
    printf("a > b : %d\n", a > b );         // a보다 b가 크면 1
    printf("a < b : %d\n", a < b );         // a가 b보다 작으면 1
    printf("a >= b : %d\n", a >= b );       // a가 b보다 크거나 같으면 1
    printf("a <= b : %d\n", a <= b );       // a가 b보다 작거나 같으면 1
    printf("a != b : %d\n", a != b );       // a와 b가 다르면 1

    return 0;
    
}