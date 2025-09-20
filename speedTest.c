#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUARE(x) (x*x)


static inline int square(int x)
{
  return (x*x);
}



int main()
{
	clock_t start,end;
	volatile int result =0;
	
	start=clock();
	for(int i =0 ;i<10000000;i++)
	{
	  result = SQUARE(i);
	}
	end=clock();
	
	double macro_time = (double)(end-start);
	
	printf("macro_Time: %f\n",macro_time);
	
	start=clock();
	for(int i =0 ;i<10000000;i++)
	{
	  result = square(i);
	}
	end=clock();
	
	double inline_time = (double)(end-start);
	printf("inline_Time: %f\n",inline_time);

	return 0;
}
