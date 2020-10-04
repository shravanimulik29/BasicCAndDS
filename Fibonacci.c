/**
  * Fibonacci.c
  * Prints out the Fibonacci series upto a particular term.
  *
  * Rajat Arora
  * rajat@rajatarora.info
  * http://github.com/rajatarora
  * 
  * Usage of this file is subject to license terms.
  * See https://github.com/rajatarora/BasicCAndDS/blob/master/LICENSE 
  * for more info.
  *
  * December 4, 2010
  *
  **/
  
#include <stdio.h> 


int main()
{
	int a,b,result,n,i;
	printf("Upto which term? ");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=1;i<=n;i++)
		printf("%d",a);
	result=a+b;
	a=b;
	b=result;
	return 0;
}

