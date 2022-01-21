/*
    정수 1부터 100까지 반복하여 출력하면서,
    값이 3 또는 6 또는 9 인 경우, 그 개수 만큼 별(*)을 출력하고
    그 외에는 숫자를 출력하는 프로그램을 완성하시오.
*/

#include <stdio.h>

int main(void) {

    for (int i = 1; i <= 100; i++) {
        // 십의자리
        // i 를 10으로 나눈 값의 정수만 취한다
        int ten = i / 10;
        // 일의자리
        // i 를 10으로 나눈 값의 나머지를 구한다.
        int one = i % 10;

        // 십의자리가 3,6,9가 되는 여부
        int ten369 = ( ten == 3 || ten == 6 || ten == 9 );

        // 일의자리가 3,6,9가 되는 여부
        int one369 = ( one == 3 || one == 6 || one == 9 );

        // 십의자리, 일의자리 모두 3,6,9 :  **
        if( ten369 && one369 ) {
            printf("**\n");
        } 
        // 십의자리 또는 일의자리가 3,6,9 : *
        else if( ten369 || one369 ) {
            printf("*\n");
        } 
        else {
            printf("%d\n", i);
        }

        // printf("i : %d\n", i);
        // printf("ten369 : %d, ", ten369);
        // printf("one369 : %d\n", one369);

    }
    
}
