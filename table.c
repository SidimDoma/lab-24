#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base.h"
//Zakharow Timofey 123-mm
Object* objects = NULL;
int objectCount = 0;

void display_menu() {
    printf("\n1. Ïîêàçàòü áàçó äàííûõ\n");
    printf("2. Äîáàâèòü ýëåìåíò\n");
    printf("3. Óäàëèòü ýëåìåíò ïî íîìåðó\n");
    printf("4. Ñîõðàíèòü â ôàéë\n");
    printf("5. ×òåíèå èç ôàéëà\n");
    printf("6. Ñîðòèðîâêà ïî ïîëþ\n");
    printf("7. Îòîáðàæåíèå äèàãðàìì\n");
    printf("8. Âûõîä\n");
}

void print_table() {
    for (int i = 0; i < objectCount; i++) {
        printf("Íîìåð ýëåìåíòà %d: Òåêñòîâîå: %s, Âåùåñòâåííîå: %f, Öåëî÷èñëåííîå: %d\n", i, objects[i].text, objects[i].floatValue, objects[i].intValue);
    }
}
