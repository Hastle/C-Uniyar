#include <stdio.h>
#include <locale.h>
#define X 100
#define Y 100
int main(){
	int x,y,i,j,q,z,A[X][Y],B[X][Y],sum = 0;
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
			printf("sum=%d\n", sum);
			B[i][j]=sum;
			sum=0;
		}
	}
	/*=== for (i=z=0; i<x; i++) {
		for (j=q=0; j<y; j++) {
			while ((z!=x)&&(q!=y)) {
				z++;
				q++;
				B[i][j]+=B[z][q];
			}
			while ((z!=0)&&(q!=y)) {
				z--;
				q++;
				B[i][j]+=B[z][q];
			}
		}
	} ===*/
	printf("\n");
	for (i=0; i<x; i++) {
		for (j=0; j<y; j++) {
			printf("%d	", B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
