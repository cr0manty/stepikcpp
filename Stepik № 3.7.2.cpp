#include <algorithm>
#include <cstddef>
#include <cstring>

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

	String &operator=(const String &other){
        if(this==&other)
            return *this;

        delete[] str;

        size = other.size;
        str = new char[size+1];
        strcpy(str,other.str);

        return *this;
    }

	void append(const String &other);

	size_t size;
	char *str;
};