#include <stdio.h>

int main(void) {

    int N;
    printf("정수를 입력해주세요 : ");
    scanf("%d", &N);

    // 홀수 일 때
    if( N % 2 == 1 ) {
        printf("입력한 정수는 홀수입니다.\n");
    } else {
        printf("입력한 정수는 짝수입니다.\n");
    }
    
    // N % 2 == 1   : 홀수
    // N % 2 == 0   : 짝수
    // 1 % 2 : 1
    // 2 % 2 : 0
    // 3 % 2 : 1
    // 4 % 2 : 0
    // 5 % 2 : 1
    // 6 % 2 : 0
    // ...

    return 0;
}