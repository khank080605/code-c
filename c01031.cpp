#include <stdio.h>

void pt (int n){
	for (int i = 2; i * i <= n; i++) if (n%i == 0){
		while (n%i == 0){
			n/= i;
		printf ("%d", i);
		if (n != 1) printf ("x");
		}
	}
	if (n != 1) printf ("%d", n);
}

int main(){
	int n;
	scanf ("%d", &n);
	pt (n);
}
