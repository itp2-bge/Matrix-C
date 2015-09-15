#include <stdio.h>
#include "matrix.h"

int main()
{
	matrix m, n, r, t;
	
	m = initmatrix(4,5);
	printf("matrix m:\n");
	
	printMatrix(m);

	n = initmatrix(4,4);
	unitMatrix(&n);
	printf("matrix n:\n");
	printMatrix(n);

	r = initmatrix(6,6);
	unitMatrix(&r);
	printf("matrix r:\n");
	printMatrix(r);
	
	t = initmatrix(6,6); 
	// t = initMatrix(6,6);
	t.data[2][2] = 1;
	printf("matrix t:\n");
	printMatrix(t);
}