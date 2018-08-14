unsigned strlen(const char *str)
{
   unsigned i=0;
   while(str[i] != '\0')
       i++;
    return i;
}
