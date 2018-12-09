#include <stdio.h>

double recurse(double a1, double q, int n);

int main() {
    double a1=0, q=0;
    int n=0;
    printf("Введите начальное значение прогрессии: ");
    scanf("%lf", &a1);
    printf("Введите разность прогрессии: ");
    scanf("%lf", &q);
    printf("Введите кол-во элементов прогрессии: ");
    scanf("%d", &n);
     
    printf("Сумма членов прогрессии = %.0lf\n", recurse(a1,q,n));
    printf("\n\n");
    return 0;
}

double recurse(double a1, double q, int n) {
    if(n==1) return a1;
    a1=recurse(a1,q,n-1);
    return a1+q;
}
