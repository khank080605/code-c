#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if (a>=b) printf ("%d", (a-b+1)*(b+a)/2);
	else printf ("%d", (b-a+1)*(b+a)/2);
	return 0;
}