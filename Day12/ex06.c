#include <stdio.h>
#include <stdlib.h>

char * getString(void) {
    char * str = (char*) malloc( sizeof(char) * 100 );
    printf("���� �����ϴ� ���� : ");
    gets(str);          // ���ڿ��� �Է¹޴� �Լ�
    return str;
}

int main(void) {

    char* result = getString();
    printf("���� �����ϴ� ������? %s \n", result);
    if( result != NULL )
        free(result);

    return 0 ;
}