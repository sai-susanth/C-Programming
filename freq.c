#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[]={1,2,3,3,3,4,5,6,1,4};
	int length = sizeof(a)/sizeof(a[0]);
	int freq[256]={0};
	
	for(int i=0;i<length;i++)
	{
	  freq[a[i]]++;
	}
	
	for(int j=0;j<length;j++)
	{
	    printf("%d times %d\n",a[j],freq[a[j]]);
	}
	return 0;
}

