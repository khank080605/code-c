#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int a, b=0, c=n;
	while (n){
		a=n%10;
		n=n/10;
		int s=1;
		for (int i=1; i<=a; i++) s=s*i;
		b=b+s;
	}
	if (b == c) printf ("1");
	else printf ("0");
	return 0;
}