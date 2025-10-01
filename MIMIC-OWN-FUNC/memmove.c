
#include <stdio.h>


void *my_memmove(void *dest,const void*src,int n)
{
    const char *s=(const char *)src;
    char *d =(char*)dest;
    if(d>s)
    {
        for(int i= n-1;i>=0;i--)
        {
            d[i]=s[i];
        }
    }
    else
    {
        for(int i =0;i<n;i++)
        {
            d[i]=s[i];
        }
    }
    return dest;
}

int main()
{
   char src[]="abcdef";
   char dest[20];
   my_memmove(src+2,src,4);
   printf("%s\n",src);
    return 0;
}
