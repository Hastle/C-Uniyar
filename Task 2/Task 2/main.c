#include <stdio.h>
#include <locale.h>
#define N 100
int main() {
	int A[N], n, i, pct, prmj=0, srdn=0, min, max;
	setlocale(LC_ALL,"RUS");
	printf("Введите процент: ");
	scanf("%d", &pct);
	printf("Введите размер массива: ");
	if(!scanf("%d", &n)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	if (n<3) {
		printf("Размер массива меньше 3, введите заново \n");
		return 0;
	}
	printf("Введите элементы массива: ");
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	min=A[1];
	max=A[1];
	for (i=0;i<n;i++) {
		if (A[i]<min)
			min=A[i];
		if (A[i]>max)
			max=A[i];
	}
	srdn=(min+max)/2;
	prmj=srdn*pct/100;
	printf("\n\n");
	for (i=0;i<n;i++)
		if ((A[i]-prmj>=srdn)||(A[i]+prmj<=srdn)) {
			printf("%d ", A[i]);
		}
	printf("\n\n");
	return 0;
}
