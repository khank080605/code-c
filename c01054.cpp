#include <stdio.h>

int tunt (int n){
	int s = 0;
	for (int i = 2; i * i <= n; i++) if (n%i == 0){
		while (n%i == 0) {
			s += i;
			n /= i;
		}
	}
	if (n != 1) s += n;
	return s;
}

int main(){
	int n;
	scanf ("%d", &n);
	int s = 0;
	for (int i = 1; i <= n; i++){
		int a;
		scanf ("%d", &a);
		s += tunt (a);
	}
	printf ("%d", s);
}