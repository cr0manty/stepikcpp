unsigned gcd(unsigned a, unsigned b)
{ 
return !b ? a : gcd (b, a % b); 
}
