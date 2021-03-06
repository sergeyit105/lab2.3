// lab2.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	double a = -2, b = 2, c = -2, d = 2, h = 0.1;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h) {
		printf("\t%8.2f", x);
	}
	printf("\n");
	for (double y = c; y <= d; y += h) {
		printf("%.2f", y);
		for (double x = a; x <= b; x += h) {
			double z = cosh(x * y) / sinh(x + y);
			printf("\t%+e", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
    return 0;
}

