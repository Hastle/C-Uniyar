#include <stdio.h>
#include <locale.h>
#define X 20
#define Y 20

struct Word {
	char l[X];
	int kl;
};

struct Sentence {
	struct Word w[Y];
	int kw;
} sent;

int ans;

void push(struct Sentence *s) {
	if (s->kw <= Y){
		printf("\nВведите ваше слово.\n\n");
		scanf("%s", s->w[s->kw++].l);
		printf("\n");
		return;
	}
	else{
		printf("\nСтек заполнен. Добавление нового слова невозможно.\n");
		return;
	}
}

void show(struct Sentence *s) {
	int i=s->kw-1;
	printf("\n");
	while (i>=0) {
		printf("%s\n", s->w[i].l);
		i--;
	}
	printf("\n");
}

void last(struct Sentence *s) {
	int i=s->kw-1;
	printf("\n%s", s->w[i].l);
	printf("\n\n");
}

void delete(struct Sentence *s) {
	s->kw--;
	printf("\n");
}

void numb(struct Sentence *s){
	int i=s->kw;
	printf("\nКол-во эл-тов в стеке = %d", i);
	printf("\n\n");
}

void clean(struct Sentence *s){
	int i=s->kw-1;
	while (i>=0) {
		s->kw--;
		i--;
	}
	printf("\n\n");
}

struct Sentence *s;

int main() {
	setlocale(LC_ALL,"RUS");
	s = &sent;
	while (1){
		printf("Нажмите:\n'1' для ввода нового слова;\n'2' для удаления последнего эл-та;\n'3' для вывода последнего эл-та;\n'4' для вывода эл-тов стека;\n'5' для вывода кол-ва эл-тов в стеке;\n'6' для очистки стека;\n'0' выход;\n\n");
		scanf("\n%d",&ans);
		if (ans==1) {
			push(s);
		}
		if (ans==2) {
			delete(s);
		}
		if (ans==3) {
			last(s);
		}
		if (ans==4) {
			show(s);
		}
		if (ans==5) {
			numb(s);
		}
		if (ans==6) {
			clean(s);
		}
		if (ans==0) {
			printf("\nВыход.");
			break;
		}
	}
}
