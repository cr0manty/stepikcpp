#include <cstddef>

template <typename TO, typename TT>
void copy_n(TO * dest, TT * source, size_t size){
    for (int i=0; i < size; i++){
        dest[i] = (TO) source[i];
    }
}