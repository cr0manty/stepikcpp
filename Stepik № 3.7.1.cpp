#include <cstddef>
#include <cstring>

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

	String(const String &other): size(other.size)
	{
        	str = new char[size+1]; 
        	for(size_t i = 0; i < size+1; ++i)
              		str[i] = other.str[i];                
	}
	void append(const String &other);

	size_t size;
	char *str;
};