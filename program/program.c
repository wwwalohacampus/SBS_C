// ��� ���� ����
#include <stdio.h>
#include <string.h>

// �ʿ��� ���
#define MAX_LEN 10      // ���� ���� �ִ� ����
#define True 1          // ��
#define False 0         // ����

// �޴� ��ȣ
#define Add 1
#define Remove 2
#define Check 3
#define Order 4
#define End 0

// ���� ��ǰ �ڵ�
#define Americano 1
#define CafeLatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0

// ���� ��ǰ ����
#define Americano_Price 2000
#define CafeLatte_Price 3000
#define Juice_Price 3000
#define Icecream_Price 4000

// ���� ���� ����ü �����
typedef struct {
    char *foods[MAX_LEN];   // ��ǰ ���
    int idxOfFoods;         // ��ǰ ��ȣ
    int totalPrice;         // ��ü ����
} ItemList;

// 1. ����� ���� �޴� ��� �Լ�
void select() {
    /* �޴��� ����ϴ� �Լ� */
    puts("***** SBS ��ī���� ī�� *****");
    puts("*** 1. ���� �߰�");
    puts("*** 2. ���� ����");
    puts("*** 3. ���� ���� Ȯ��");
    puts("*** 4. ���� ���� �ֹ�");
    puts("*** 0. ���α׷� ����");
    puts("***********************************");
}

void showMenu() {
    /* �ֹ��� �� �ִ� �޴��� ����ϴ� �Լ� */
    puts("***** ���� �߰� *****");
    puts("*** 1. �Ƹ޸�ī�� (2000)");
    puts("*** 2. ī��� (3000)");
    puts("*** 3. �ֽ� (3000)");
    puts("*** 4. ���̽�ũ�� (4000)");
    puts("*** 0. ���");
    puts("*************************");
}

void showRemoveMenu(){
    /* ������ �� �ִ� ���� ����� ����ϴ� �Լ� */
    puts("***** ���� ���� *****");
    puts("*** 1. �Ƹ޸�ī�� (2000)");
    puts("*** 2. ī��� (3000)");
    puts("*** 3. �ֽ� (3000)");
    puts("*** 4. ���̽�ũ�� (4000)");
    puts("*** 0. ���");
    puts("*************************");
}


// 2. ���� �߰� �Լ�
void addMenu(ItemList *itemList) {
    /* ����ڰ� �߰��� ���Ḧ �����ϸ�,
        - ItemList ����ü�� ��� �迭�� �ش� ���Ḧ �߰�
        - ����� �� ������ 1 ����
        - �ش� ������� ������ ��ü ���ݿ� ���� */
    
    // ������� �ִ� 10�������� ���� ����
    if (itemList->idxOfFoods >= MAX_LEN) {
        puts("�� �̻� �߰��� �� �����ϴ�. (�ִ� 10��)");
        return;
    }

    int choice;
    int i;
    showMenu();     // ���� �޴� ��� (������ ������)
    printf("�޴� ��ȣ : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:
            puts ("�Ƹ޸�ī�� �߰�");
            i = itemList->idxOfFoods;
            itemList->foods[i] = "�Ƹ޸�ī��";
            itemList->idxOfFoods++;     // �ε��� 1 ���� (�� ���� +1)
            // ��ü ���� + �ش� ���� ����
            itemList->totalPrice += Americano_Price;
            break;
        case CafeLatte:
            puts ("ī��� �߰�");
            i = itemList->idxOfFoods;
            itemList->foods[i] = "ī���";
            itemList->idxOfFoods++;     // �ε��� 1 ���� (�� ���� +1)
            // ��ü ���� + �ش� ���� ����
            itemList->totalPrice += CafeLatte_Price;
            break;
        case Juice:
            puts ("�ֽ� �߰�");
            i = itemList->idxOfFoods;
            itemList->foods[i] = "�ֽ�";
            itemList->idxOfFoods++;     // �ε��� 1 ���� (�� ���� +1)
            // ��ü ���� + �ش� ���� ����
            itemList->totalPrice += Juice_Price;
            break;
        case Icecream:
            puts ("���̽�ũ�� �߰�");
            i = itemList->idxOfFoods;
            itemList->foods[i] = "���̽�ũ��";
            itemList->idxOfFoods++;     // �ε��� 1 ���� (�� ���� +1)
            // ��ü ���� + �ش� ���� ����
            itemList->totalPrice += Icecream_Price;
            break;

        case Cancel:
            puts("����մϴ�.");
            break;
    
        default:
            puts("�߸��� �Է��Դϴ�.");
            break;
    }
}

// 3. ���� - ����ü ��� �迭���� �׸��� ����
int removeItem(ItemList *itemList, char* itemToRemove) {
    /* ����ڰ� ������ ���Ḧ �����ϸ�
        -  ItemList ����ü�� ��� �迭���� �ش� ���Ḧ ���� */
    int i, rmIdx = -1;  // ������ �ε���
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        // �迭�� �����, ������ ���� �̸��� ������ Ȯ��
        if( !strcmp(itemList->foods[i], itemToRemove) ) {
            rmIdx = i;
            break;
        }
    }

    printf("������ rmIdx : %d \n", rmIdx);
    // ������ �׸��� ������,
    if ( rmIdx >= 0 ) {
        // �ڿ������� ���� �׸��� �ִ� ��ұ��� �ϳ��� ������ ����.
        for ( i = rmIdx; i < itemList->idxOfFoods - 1; i++) {
            itemList->foods[i] = itemList->foods[i+1];  // �ϳ��� �����
        }
        
        if( rmIdx == 0 && itemList->idxOfFoods ) {
            itemList->foods[0] = NULL;
        }

        printf("%s �� �����߽��ϴ�.\n", itemToRemove);
        return True;
    }
    else {
        // ������ �׸��� ������, (���� ä������)
        // -- "������ �׸��� �����ϴ�.", False ��ȯ
        printf("������ �׸��� �����ϴ�.\n");
        return False;   
    }
    
}

// 4. ���� �׸� ���� �Լ�
void removeMenu(ItemList * itemList) {
    /* ����ڰ� ������ ���Ḧ �����ϸ�,
        - ���ᰡ �ϳ��� ���õ��� �ʾ��� ��� -> "�� �̻� ������ �� �����ϴ�."
        - ���õ� ���ᰡ �����Ѵٸ�(��������), removeItem() �Լ��� ȣ���Ͽ� ���� ��û */
    
    if (itemList->idxOfFoods <= 0) {
        puts("�� �̻� ������ �� �����ϴ�.");
        return;
    }

    int choice;
    showRemoveMenu();     // ���� ���� �޴� ���
    printf("�޴� ��ȣ : ");
    scanf("%d", &choice);

    switch (choice) {
        case Americano:
            if (removeItem(itemList, "�Ƹ޸�ī��")) {
                itemList->totalPrice -= Americano_Price;
                (itemList->idxOfFoods)--;
            }
            break;
        case CafeLatte:
            if (removeItem(itemList, "ī���")) {
                itemList->totalPrice -= CafeLatte_Price;
                (itemList->idxOfFoods)--;
            }
            break;
        case Juice:
            if (removeItem(itemList, "�ֽ�")) {
                itemList->totalPrice -= Juice_Price;
                (itemList->idxOfFoods)--;
            }
            break;
        case Icecream:
            if (removeItem(itemList, "���̽�ũ��")) {
                itemList->totalPrice -= Icecream_Price;
                (itemList->idxOfFoods)--;
            }
            break;

        case Cancel:
            puts("����մϴ�.");
            break;
    
        default:
            puts("�߸��� �Է��Դϴ�.");
            break;
    }
}


// 5. �޴� Ȯ�� �Լ�
void checkMenu(ItemList *itemList) {
    /* ����ڰ� ������ ������ ��ü '����'�� '���'�� ���*/
    int i = 0;
    printf("�ֹ� ��ü ���� : %d \n", itemList->totalPrice);
    for ( i = 0; i < itemList->idxOfFoods; i++) {
        printf("%s \n", itemList->foods[i]);
    }
    printf("\n");

}

// 6. �ֹ� �Լ�
int order(ItemList *itemList) {
    /* �ֹ��� ��ü ������ ����� ��, �ֹ� ���� ��Ȯ��
        ��, ���� �ֹ� ���θ� True(1), False(0)�� ��ȯ */
    if (itemList->idxOfFoods <= 0) {
        puts("�ƹ��͵� �������� �ʾҽ��ϴ�.");
        return -1;
    }

    int choice;
    checkMenu(itemList);
    puts("������ �ֹ��Ͻðڽ��ϱ�?");

    printf("1. ��, 2. �ƴϿ� : ");
    scanf("%d", &choice);

    if( choice==1 )
        return True;
    if( choice==2 )
        return False;
}

// 7. main �Լ�
int main(void) {

    // ����
    ItemList itemList;
    itemList.idxOfFoods = 0;
    itemList.totalPrice = 0;
    int choice;

    while(1) {
        select();
        printf("�޴� ��ȣ : ");
        scanf("%d", &choice);

        printf("\n\n");

        switch (choice) {
            // 1. �߰�
            case Add:
                        addMenu(&itemList);
                        printf("\n\n");
                        break;
            // 2. ����
            case Remove:
                        removeMenu(&itemList);
                        printf("\n\n");
                        break;
            // 3. Ȯ��
            case Check:
                        checkMenu(&itemList);
                        printf("\n\n");
                        break;
            // 4. �ֹ�
            case Order:
                        if( order(&itemList) ) {
                            // �ֹ�����
                            puts("�ֹ� �Ϸ�!\n ���α׷��� �����մϴ�");  // ���ڿ� ��� �Լ�
                            printf("\n\n");
                            return 0;
                        } else {
                            // �ֹ� ���
                            puts("�ֹ� ����!");
                            printf("\n\n");
                        }
                        break;
            // 0. ����
            case End:
                        puts("���α׷��� �����մϴ�.");
                        return 0;
            default:
                        puts("�߸��� �Է��Դϴ�. (0~4)���� ��ȣ�� �Է����ּ���.");
                        break;
        }

    }
    return 0;

}