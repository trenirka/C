// stevila.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int main()
{
	int a;
	int b;
	//vnesi število 1
	printf("vnesi prvo celo število: ");
	scanf("%i", &a);
	//vnesi število 2
	printf("vnesi drugo celo število: ");
	scanf("%i", &b);
	//vsota
	printf("vsota: %i\n", a+b);
	//razlika
	printf("razlika: %i\n", a-b);
	//zmnožek
	printf("zmnožek: %i\n", a*b);
	//delitev, ostanek pri delitvi
	printf("deljenje: %i\n", a/b);
	printf("ostanek pri deljenju: %i\n", a%b);
	system("PAUSE");
	return 0;
}

