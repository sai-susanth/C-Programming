
#include <stdio.h>

char* my_strcpy(char *dest, const char *src,int dest_size)
{
    int i=0;
   for(i;(i<dest_size&&src[i]!='\0');i++)
   {
       dest[i]=src[i];
   }
   dest[i]='\0';
   return dest;
}

int main()
{
//   1. works only for strings;
//   2. watch out for \0;
//   3. dest size >= src size;
     char src[] = "susanth";
     char dest[3];
     my_strcpy(dest,src,3);
     printf("%s\n",dest);

    return 0;
}
