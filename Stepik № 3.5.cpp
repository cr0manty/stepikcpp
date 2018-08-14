char &get_c(Cls &cls) {
    char* ptr;
    ptr = (char*)&cls;

    return *ptr;
}

double &get_d(Cls &cls) {
    double* ptr;
    ptr = (double*)( (char*)(&cls) ) + 1;

    return *ptr; 
}

int &get_i(Cls &cls) {
    double* p;
    int* ptr;
    p = (double*)( (char*)(&cls) ) + 1;
    ptr = (int*) (p + 1);
    
    return *ptr;
}