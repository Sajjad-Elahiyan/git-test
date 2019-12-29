#include <stdio.h>
int n,x;
int main() 
{
	scanf ("%d",&n);
	salam(n);
}
void salam(int n)
{
	printf ("salam\n");
	vassalam (n-1);
	//ezafe
}
void vassalam(int n)
{
	printf ("vassalam\n");
	if(n >= 1)
		salam(n);
	
}















