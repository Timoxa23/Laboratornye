#include <stdio.h>
#include <stdlib.h>
#include <math.h> // ���������� �������������� �������
#include <locale.h> // ���������� ���������� ����������� (��� �������� ����� � �������)
int main(void) {
	float x,a;
	printf("Enter x:");
	scanf("%f",&x);
	a=128*x*x;
	printf("You enetered a:%f",a);
}