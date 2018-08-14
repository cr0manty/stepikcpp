void rotate(int *array, unsigned size, int shift)
{
    int temp;
    for (int i = 0, j; i < shift; ++i)
    {
        temp = array[0];
        for (j = 0; j < size - 1; ++j)
            array[j] = array[j + 1];
        array[j] = temp;
    }
}



