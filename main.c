#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <graphics.h>
#include "base.h"
#include "add_and_del.h"
#include "graphic.h"
#include "save_and_read.h"
#include "sort.h"

int main() {
    setlocale(LC_CTYPE, "Russian");
    int choice, index, field, direction, chartType, file;
    char filename[50]; // ������������ ����� ����� �����
    while (1) {
        display_menu();
        printf("\n������� ���� �����: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                print_table(); // ����� ������� �� �����
                break;
            case 2:
                add_object(); // ���������� ��������
                break;
            case 3: // �������� ��������
                printf("������� ������ ��� ��������: ");
                scanf("%d", &index);
                delete_object(index);
                break;
            case 4: // ���������� � ����
                printf("��������: 1-��������� � �������� ����, 2-������ ��� �����\n");
                scanf("%d", &file);
                switch (file) {
                    case 1:
                        saveToFile("objects.txt");
                        break;
                    case 2:
                        printf("������� ��� �����: ");
                        scanf("%s", filename);
                        saveToFile(filename);
                        break;
                    default:
                        printf("�������� �����\n");
                }
                break;
            case 5: // ������ �� �����
                printf("��������: 1-������ �� ��������� �����, 2-������ ��� �����\n");
                scanf("%d", &file);
                switch (file){
                    case 1:
                        readFromFile("objects.txt");
                        break;
                    case 2:
                        printf("������� ��� �����: ");
                        scanf("%s", filename);
                        readFromFile(filename);
                        break;
                    default:
                        printf("�������� �����\n");
                }
                break;
            case 6: // ����������
                printf("�������� ���� ��� ���������� (1 - �����, 2 - ������������, 3 - �����): ");
                scanf("%d", &field);
                printf("�������� ����������� ���������� (1 - �� �����������, 2 - �� ��������): ");
                scanf("%d", &direction);
                if (direction>2){
                    printf("�������� �����\n");
                    break;
                }
                switch (field) {
                    case 1:
                        sortObjectsByField(1, direction, compareText);
                        break;
                    case 2:
                        sortObjectsByField(2, direction, compareFloat);
                        break;
                    case 3:
                        sortObjectsByField(3, direction, compareInt);
                        break;
                    default:
                        printf("�������� ����� ���� ��� ����������\n");
                }
                break;
            case 7: // ����� ��������
                printf("�������� �������� ���� ��� ���������� ��������� (1 - ������������, 2 - �����): ");
                scanf("%d", &field);
                if (field>2){
                    printf("�������� �����\n");
                    break;
                }
                printf("�������� ��� ��������� (1 - ����������, 2 - ��������): ");
                scanf("%d", &chartType);
                switch (chartType) {
                    case 1:
                        drawBarChart(field);
                        break;
                    case 2:
                        drawPieChart(field);
                        break;
                    default:
                        printf("�������� ����� ���� ���������\n");
                }
                break;
            case 8:
                exit(0);
            default:
                printf("�������� �����\n");
        }
    }
    return 0;
}
