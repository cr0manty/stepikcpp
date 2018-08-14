#include <cstddef>
#include <cstring>

struct String {
    size_t size;
	char *str;
	String(size_t n, char c)
    {
        size = n;
        str = new char[size+1];
        for(int i=0;i<n;i++)
            str[i]=c; 
        str[size] = 0;
    }
	~String(){
        delete[] str;}	
};