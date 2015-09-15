typedef struct mat {
					int   rows;
					int   cols;
					int** data;
	} matrix, *ptr_matrix;
	
matrix initmatrix(int row_dim, int col_dim);
void unitMatrix(matrix *m);
void printMatrix(matrix *m);