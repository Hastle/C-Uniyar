#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct List {
    int info;
    struct List* next;
} List;

List *First, *Last;


List *delute_item(List *first, int number) {
    List *tmp;
    List *Current=first;
    for(int i=1;i<number&&Current!=NULL;i++)
        Current=Current->next;
    if(Current!=NULL) {
        if(Current==first) {
            first=first->next;
            free(Current);
            Current=first;
        }
    else {
        tmp=first;
    while(tmp->next!=Current)
        tmp=tmp->next;
    tmp->next=Current->next;
    free(Current);
    Current=tmp;
    }
    }
    return first;
}

/*List* Insert_item(List *first,int number,int item)
{
    List * tmp;
    List *Current;
    for(int i=1;i<number&&Current!=NULL;i++)
        Current=Current->next;
    if(Current==first)
    {
        tmp->next=first->next;
        tmp->info=item;
        first=tmp;
    }
    else
    {
        
    }
}*/


void push(int inf) {
    struct List* el;
    
    el = (struct List*)malloc(sizeof(struct List));
    if (el == NULL) {
        printf("Не удалось выделить память под элемент списка.\n");
        return;
    }
    
    el->info = inf;
    el->next = NULL;
    
    if (First == NULL)
        First = Last = el;
    else
    {
        Last->next = el;
        Last = Last->next;
    }
}

void printList(List *first)
{
   List* Current=first;
    while(Current!=0)
    {
        printf("%d ",Current->info);
        Current=Current->next;
    }
    return;
}

int main(void)
{
    int inf, number;
    char c;
    List *el, *tmp;
    
    setlocale(LC_ALL, "Russian");
    
    First = Last = NULL;
    
    printf("Введите элементы списка (окончание ввода = любой символ кроме цифры):\n");
    while (scanf("%d", &inf) != 0)
        push(inf);
    c=getchar();
    
    printf("Введите номер элемента который вы хотите удалить: ");
    scanf("%d", &number);
    
    printf("Изначальный список: ");
    printList(First);
    printf("\n");
    First=delute_item(First, number);
    printf("Измененный список: ");
    printList(First);
    printf("\n\n");
    
    for (el = First; el != NULL;)
    {
        tmp = el;
        el = el->next;
        free(tmp);
    }
    
    return 0;
}
