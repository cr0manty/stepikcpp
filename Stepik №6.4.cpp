#include <cstddef>

template <typename T, size_t size>
size_t array_size(T (&array)[size]) {
    return size;
}