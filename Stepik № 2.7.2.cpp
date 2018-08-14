void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int minRow = 0, minCol = 0;
    for (int i = 0; i < rows ; i++ )
        for (int j = 0; j < cols ; j++ )
            if (m[i][j] < m[minRow][minCol]) {
                minRow = i;
                minCol = j;
            }

    if ( minRow != 0 ) {
        int *temp = m[0];
        m[0] = m[minRow];
        m[minRow] = temp;
    }        
}




