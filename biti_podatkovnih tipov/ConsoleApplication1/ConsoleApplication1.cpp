// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;
	//void voidType;

	// Sizeof operator is used to evaluate the size of a variable
	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(char));
	//printf("Velikost void: %ld bytes\n", sizeof(void));
	system("PAUSE");
	return 0;
}