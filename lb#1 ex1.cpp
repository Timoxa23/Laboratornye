#include <stdio.h>
#include <stdlib.h>
#include <math.h> // подключаем математические функции
#include <locale.h> // подключаем библиотеку локализации (для русского языка в консоли)
int main(void) {
	float x,a;
	printf("Enter x:");
	scanf("%f",&x);
	a=128*x*x;
	printf("You enetered a:%f",a);
}