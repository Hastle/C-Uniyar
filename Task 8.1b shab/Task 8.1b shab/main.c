#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int n, int mass[]) {
    int newElement, location, repos=0;
    for (int i=1; i<n; i++) {
        newElement = mass[i];
        location = i - 1;
        while(location >= 0 && mass[location] > newElement) {
            mass[location+1] = mass[location];
            repos++;
            location--;
        }
        mass[location+1] = newElement;
    }
    printf("Кол-во перемещений: %d\n", repos);
}

int main() {
    int N;
    printf("Введите N: ");
    scanf("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    printf("Введите эллементы массива: ");
    for (int i=0; i<N; i++)
        scanf("%d", &mass[i]);
    InsertionSort(N, mass);
    printf("Сортированный массив: ");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n\n");
    free(mass);
    return 0;
}
