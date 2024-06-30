#include <stdio.h>

int tnt (int n){
	int s = 1;
	for (int i = 2; i * i <= n; i++) if (n%i == 0){
		while (n%i == 0) n/= i;
		s *= i;
	}
	if (n != 1) s *= n;
	return s;
}

int main (){
	int t;
	scanf ("%d", &t);
	for (int i = 1; i <= t; i++){
		int n;
		scanf ("%d", &n);
		printf ("%d\n", tnt (n));
	}
}
