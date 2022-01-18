#include <stdio.h>
// 복합 대입 연산자
int main(void) {
    int A = 10;
    int B = 20;

    A += 10;    // A = A + 10;
    B += 20;    // B + B + 20;

    printf("A : %d \n", A);
    printf("B : %d \n", B);

    return 0;   
}