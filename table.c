#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"

// ��������������
Object* objects = NULL;
int objectCount = 0;

void display_menu() {
    printf("\n1. �������� ���� ������\n");
    printf("2. �������� �������\n");
    printf("3. ������� ������� �� ������\n");
    printf("4. ��������� � ����\n");
    printf("5. ������ �� �����\n");
    printf("6. ���������� �� ����\n");
    printf("7. ����������� ��������\n");
    printf("8. �����\n");
}
// ������� ��� ������ ������� �� �����
void print_table() {
    // ����� ������� ��������
    for (int i = 0; i < objectCount; i++) {
        printf("����� �������� %d: ���������: %s, ������������: %f, �������������: %d\n", i, objects[i].text, objects[i].floatValue, objects[i].intValue);
    }
}
