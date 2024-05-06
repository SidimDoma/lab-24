#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"
// ������� ��� ���������� ��������
void add_object() {
    // ���������� ������� �������
    objects = (Object*)realloc(objects, (objectCount + 1) * sizeof(Object));
    // ���� ������ � ����������
    printf("������� �����: ");
    scanf("%s", objects[objectCount].text);
    printf("������� ������������ �����: ");
    scanf("%f", &objects[objectCount].floatValue);
    printf("������� ����� �����: ");
    scanf("%d", &objects[objectCount].intValue);
    objectCount++;
    printf("%d\n", objectCount);
}
// ������� ��� �������� �������� �� ������
void delete_object(int index) {
    if (index < 0 || index >= objectCount) {
        printf("�������� �����\n");
        return;
    }
    // ����� ���� ��������� ����� ����������
    for (int i = index; i < objectCount - 1; i++) {
        objects[i] = objects[i + 1];
    }
    // ���������� ������� �������
    objects = (Object*)realloc(objects, (objectCount - 1) * sizeof(Object));
    objectCount--;
}
