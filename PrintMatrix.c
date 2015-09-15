#include <stdio.h>
#include "matrix.h"

void printMatrix(matrix *m)
{
	int row, col;
	
	for (row =0; row < m->rows; row++)
	{
		for(col = 0; col < m->cols; col++)
		{
			printf("\t %d", m->data[row][col]);
		}
		putchar('\n');
	}
}

void unitMatrix(matrix *m)
{
	int row, col;
	
	for (row = 0; row < m->rows; row++)
	{
		for (col = 0; col < m->cols; col++)
		{
			m->data[row][col] = (row == col) ? 1 : 0;
		}
	}
}