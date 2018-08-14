#include <cstddef>
#include <cstring>

struct String {

    String(const char *str = "") {
        this->size = (strlen(str));
        this->str = (new char[strlen(str)+1]);
        strcpy(this->str, str);
        
    } 
	size_t size;
	char *str;
};