#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 30


char row_1[N],row_2[N];

void ident_func() {
    int i, n;
    while (strstr(row_2, "***") == NULL) {
        i = 0;
        while ((row_1[i - 1] != ' ') && (strstr(row_1, "***") == NULL)) {
            scanf("%c", &row_1[i]);
            i++;
        }
        if (strcmp(row_1, " ") != 0) {
            if (strcmp(row_1, row_2) == 0)
                printf("%s ", row_1);
            strcpy(row_2, row_1);
            for (n = 0; n <= i - 1; n++)
                row_1[n] = NULL;
        }
    }
}


int main() {
    setlocale(LC_ALL,"RUS");
    
    printf("Введите последовательность идентификаторов: \n");
    ident_func();
    printf("\n\n");
    return 0;
}
