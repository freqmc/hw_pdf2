#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
	int a, x, ans;
	setlocale(LC_ALL, "RUS");
	printf("������� a � x\n");
	scanf("%d %d", &a, &x);
	printf("������� ���������:\n%d ������ �� ������ 75 �����\n%d ������ �� ��������� %d �����.", 75*a, (133 - 75)*x, 133 - 75);
}