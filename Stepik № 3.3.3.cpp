#include <cstddef>
#include <cstring>

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();

	void append(String &other){
        int mySize = this->size + other.size + 1;
        char * str = new char[mySize];
        strcat(str, this->str);
        strcat(str, other.str);
        strcat(str,"\0");
        
        delete [] this->str;
        this->str = str;
        this->size = strlen(this->str);
        
    }
	size_t size;
	char *str;
};