#include <stdio.h>

double recurse(int a1, int q, int n);

int main() {
    int a1=0, q=0, n=0;
    printf("Введите начальное значение прогрессии: ");
    scanf("%d", &a1);
    printf("Введите разность прогрессии: ");
    scanf("%d", &q);
    printf("Введите кол-во элементов прогрессии: ");
    scanf("%d", &n);
    
    printf("Сумма членов прогрессии = %.0lf\n", recurse(a1,q,n));
    printf("\n\n");
    return 0;
}

double recurse(int a1, int q, int n) {
    if(n==1)
        return a1;
    else
        return a1+=recurse(a1+q, q, n-1);
}
// 2 7 12
