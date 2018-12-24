#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

#define N 100

typedef struct List
{
    int value;
    struct List* next;
} List;

List *First, *Last;

void push(int inf)
{
    struct List* el;
    
    el = (struct List*)malloc(sizeof(struct List));
    if (el == NULL)
    {
        printf("Не удалось выделить память под элемент списка.\n");
        return;
    }
    
    el->value = inf;
    el->next = NULL;
    
    if (First == NULL)
        First = Last = el;
    else
    {
        Last->next = el;
        Last = Last->next;
    }
}


void main() {
    int j;
    setlocale(LC_ALL, "RUS");
    List *el, *help, *before;
    First = Last = NULL;
    before = NULL;
    
    printf("Введите последовательность чисел:\n");
    while (scanf("%d", &j) != 0) {
        push(j);
    }
    
    
    while ((First->value % 2 == 0)) {
        help = First;
        First = First->next;
        free(help);
        if (First == NULL)
            return;
    }
    before = First;
    for (el = First; el != NULL; el = el->next) {
        if (el->value % 2 == 0) {
            help = before->next;
            before->next = el->next;
            free(help);
            el=before;
        }
        else before = el;
    }
    for (el = First; el != NULL; el = el->next) {
        printf("%d ", el->value);
    }
    printf("\n\n");
}
