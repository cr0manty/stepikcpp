int power(int x, unsigned p) {
    if(p) return x*power(x,--p);
    return 1;
}