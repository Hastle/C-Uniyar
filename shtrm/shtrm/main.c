#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 10

int main(){
    int stp,A[N],i,q,apr;
    setlocale(LC_ALL,"RUS");
    printf("Введите степень многочлена: ");
    if(!scanf("%d", &stp)) {
        printf("Вы ввели не число \n");
        return 0;
    }
    printf("Введите коэффиценты многочлена (%d), начиная со старшего: \n", stp+1);
    for (i=0; i<stp+1; i++)
        if(!scanf("%d", &A[i])) {
            printf("Вы ввели не число \n");
            return 0;
        }
    printf("\n");
    printf("Вы ввели многочлен: ");
    for (i=0; i<stp+1; i++)
        if (A[i]!=0) {
            if ((i!=0)&&(A[i]>0))
                printf("+");
            if ((A[i]==-1)&&(i==0))
                printf("-");
            if ((A[i]!=1)&&(A[i]!=-1))
                printf("%d", A[i]);
            if (i!=stp) {
                printf("x");
                if (i+1!=stp)
                    printf("^%d", stp-i);
            }
        }
    printf("\n");
    printf("Введите параметр точности аппроксимации: ");
    scanf("%d", &apr);
    printf("\n");
    for (q=0; q<stp; q++) {
        printf("f(%d) = ", q);
        if (q==0)
            for (i=0; i<=stp; i++)
                if (A[i]!=0) {
                    if ((i!=0)&&(A[i]>0))
                        printf("+");
                    if ((A[i]==-1)&&(i==0))
                        printf("-");
                    if ((A[i]!=1)&&(A[i]!=-1))
                        printf("%d", A[i]);
                    if (i!=stp) {
                        printf("x");
                        if (i+1!=stp)
                            printf("^%d", stp-i);
                    }
                }
        if (q==1) {
            for (i=0; i<=stp; i++) {
                A[i]*=stp-i;
                if (A[i]!=0) {
                    if ((i!=0)&&(A[i]>0))
                        printf("+");
                    if ((A[i]==-1)&&(i==0))
                        printf("-");
                    if ((A[i]!=1)&&(A[i]!=-1))
                        printf("%d", A[i]);
                    
                    if (i!=stp) {
                        printf("x");
                        if (i+1!=stp)
                            printf("^%d", stp-i-1);
                    }
                }
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
