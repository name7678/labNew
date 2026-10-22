#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
	int a;
	printf("Введите число: ");
	scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < a - i; j++) {
            printf(" ");
        }

        if (i == 1) {

            printf("*");
        }
        else if (i == a) {
            for (int j = 0; j < 2 * a - 1; j++) {
                printf("*");
            }
        }
        else {
            printf("*");
            for (int j = 0; j < 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}