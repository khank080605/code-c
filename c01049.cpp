#include <stdio.h>
int main (){
	int m;
	scanf ("%d", &m);
	for (int i=1; i<=m; i++){
		int n;
		scanf ("%d", &n);
		int a, l=0, c=0;
		while (n){
			a=n%10;
			if (a%2 == 1) l++;
			else c++;
			n=n/10;
		}
		printf ("%d %d\n", l, c);
	}
	return 0;
}