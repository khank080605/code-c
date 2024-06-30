#include <stdio.h>
int main (){
	int m;
	scanf ("%d", &m);
	for (int j=1; j<=m; j++){
		long long n;
		int a, b, c=0;
		scanf ("%lld", &n);
		while (n){
			a=n%10;
			n=n/10;
			b=n%10;
			if (b>a){
				c++;
				break;
			}
		}
		if (c == 0) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}