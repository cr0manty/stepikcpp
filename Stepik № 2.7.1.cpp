int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **arr = new int*[cols];
    for (int i = 0; i < cols; i++)
        arr[i] = new int[rows];
    
    for (int i = 0; i<rows; i++)
        for (int j = 0; j<cols; j++)
            arr[j][i] = m[i][j];
    return arr;
}