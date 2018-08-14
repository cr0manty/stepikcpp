#include <iostream>
using namespace std;

char * resize(const char *str, unsigned size, unsigned new_size)
{
    char * ptr = new char[new_size];                      
    int len = size < new_size ? (size) : (new_size);
    for (int i = 0; i < len; i++)
        ptr[i] = str[i];
    
    delete[] str;
 
    return ptr;
}

char* getline()
{
	char c;
	const int constSize = 64;
	int i = 0, size = 64;
	char* str = new char[size];
	while (cin.get(c) && c != '\n')	{
		if (i == size)
			str = resize(str, i, size += constSize);
		str[i++] = c;
	}
	str[i] = '\0';
	return str;
}
