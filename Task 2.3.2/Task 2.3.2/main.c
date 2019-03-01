#include <stdio.h>
#include <locale.h>
#define X 100
#define Y 100
int main(){
	int x,y,i,j,q,z = 0,t = 0,A[X][Y],B[X][Y],sum = 0;
	setlocale(LC_ALL,"RUS");
    printf("Введите кол-во строк: ");
	if(!scanf("%d", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("Введите кол-во столбцов: ");
	if(!scanf("%d", &y)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &(A[i][j]));
		}
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			for (q=j;q<y;q++)
				sum+=A[i][q];
			B[i][j]=sum;
			sum=0;
		}
	}
    printf("\n");
    for (j=0; j<y; j++) {
        for (i=0; i<y; i++) {
            z=i;
            t=j;
            while ((z!=0)&&(t!=y)) {
                B[i][j]+=B[z-1][t+1];
                z--;
                t++;
            }
            z=i;
            t=j;
            while ((z!=x)&&(t!=y)) {
                B[i][j]+=B[z+1][t+1];
                z++;
                t++;
            }
        }
    }
    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            printf("%d  ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
	return 0;
}
