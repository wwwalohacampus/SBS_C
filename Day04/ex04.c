#include <stdio.h>

int main(void) {

    int score = 0;
    char grade = 'F';
    printf("���� : ");
    scanf("%d", &score);

    if( score <= 100 && score >= 90 ) {
        grade = 'A';
    }
    if( score < 90 && score >= 80 ) {
        grade = 'B';
    }
    if( score < 80 && score >= 70 ) {
        grade = 'C';
    }
    if( score < 70 && score >= 60 ) {
        grade = 'D';
    }
    if( score < 60 ) {
        grade = 'F';
    }
    
    printf("����� %c �Դϴ�.", grade);

    return 0;
}