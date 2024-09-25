#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	int a, x, ans;
	setlocale(LC_ALL, "RUS");
	printf("Введите a и x\n");
	scanf("%d %d", &a, &x);
	printf("Мальчик заработал:\n%d рублей за первые 75 газет\n%d рублей за остальные %d газет.", 75*a, (133 - 75)*x, 133 - 75);
}