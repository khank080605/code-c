#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf ("%d", &n);
	int z=0;
	while (n){
		z++;
		n=n/10;
	}
	printf ("%d", z);
	
}