#include <stdio.h>
#include <stdlib.h>

int main()

{
   int a[]={3,1,5,6,1,4,9,3,2,5};
   int length = sizeof(a)/sizeof(a[0]);
   
   for(int i=0;i<length;i++)
   {
   	int j =i;
   	
   	while(j<length)
   	{
   		if(a[i]==a[j] && i!=j)
   		{
	   		for(int k =j;k<length;k++)
	   		{
	   			a[k]=a[k+1];
	   		}
	             length--;
   		}
   		else
   		{
   		  j++;
   		}
   	}
   }
   
   for(int i =0;i<length;i++)
   {
     printf("%d\t",a[i]);
   }
   return 0; 
}
