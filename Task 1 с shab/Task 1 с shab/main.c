#include <stdio.h>
#include <locale.h>
#define Y 10
int main(){
	int x,i=0,j,A[Y],stp=1,span=0;
	setlocale(LC_ALL,"RUS");
	printf("Введите число: ");
	if(!scanf("%d", &x)) {
		printf("Вы ввели не число \n");
		return 0;
	}
	if (x<=0) {
		printf("Вы ввели отрицательное число или ноль \n");
		return 0;
	}
	printf("\nОтвет: %d = ",x);
	while (x!=0) {
		A[i]=x%2;
		x=x/2;
		i++;
	}
	for (j=i;j>-1;j--) {
		i=j;
		stp=1;
		if (A[i]==1)
			for (i=0;i<j;i++)
				stp*=2;
		else
			stp = 0;
		if ((stp!=0)&&(span!=0))
			printf(" + %d",stp);
		if ((stp!=0)&&(span==0)) {
			printf("%d",stp);
			span=1;
		}
	}
	return 0;
}
