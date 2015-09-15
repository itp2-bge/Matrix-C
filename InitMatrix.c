#include <stdio.h>
#include "matrix.h"


matrix initmatrix(int row_dim, int col_dim)
{
	matrix tmp;
	int   row, col;
	int** ptr_row;
	int*  ptr_data;
	
	tmp.rows = row_dim;
	tmp.cols = col_dim;
	ptr_row  = (int**) malloc(row_dim * sizeof(int*));
	tmp.data = ptr_row;
	ptr_data = (int*) malloc(row_dim * col_dim * sizeof(int));
		
	for (row = 0; row < row_dim; row++)
	{
		*ptr_row = ptr_data;
		ptr_row++;
		ptr_data += col_dim;
	}
	for(row = 0; row < row_dim; row++)
	{
		for (col = 0; col < col_dim;  col++)
		{
			tmp.data[row][col] = 0;
		}
	}
	return tmp;
}