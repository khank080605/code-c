#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a=n%10, b;
	while (n){
		b=n%10;
		n=n/10;
	}
	printf ("%d %d", b, a);
	return 0;
}