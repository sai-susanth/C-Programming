#include <stdio.h>
#include <stdlib.h>


void *my_memcpy(void *dest,const void *src,int n)
{
	const char *s=(const char *)src;
	char *d=(char *)dest;
	
	if(d==NULL)
	{
		printf("No space left , Sorry!\n");
		return;
	}
	
	for(int i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	
	return dest;
}


int main()
{
	//char src[] ="susanth";
	//char dest[20];
	int src[]={1,2,3,4};
	int dest[20];
	my_memcpy(dest,src,3*sizeof(int));
	for(int i =0 ;i<3;i++)
	{
		printf("%d\t",dest[i]);
	}
	return 0;
}
