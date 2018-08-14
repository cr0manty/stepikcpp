char * resize(const char *str, unsigned size, unsigned new_size)
{
    char * ptr = new char[new_size];
                                  
    int len = size < new_size ? (size) : (new_size);
    for (int i = 0; i < len; i++)
        ptr[i] = str[i];
    
    delete[] str;
 
    return ptr;
}