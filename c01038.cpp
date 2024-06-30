#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d", &n);
	int x=n%10, y,z=0,t=n;
	while (n){
		y=n%10;
		z++;
		n=n/10;
	}
	int kq;
	kq=(x-y)*(pow(10, z-1)-1)+t;
	printf ("%d", z);
	
}