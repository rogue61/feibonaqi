#include <stdio.h>
int fbnq(int n)
{
	if(n<=2)
{
		return 1;
	}
	else
{
  return fbnq(n-1)+fbnq(n-2); 
}
 } 
 int main()
 {
 	int n=0;
 	scanf("%d",&n);
 	int result=fbnq(n);
 	printf("%d\n",result);
 	return 0;
 }
