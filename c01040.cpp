#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int s=0;
	for (int i=1; i<n; i++) if (n%i == 0) {
		s=s+i;
	}
	if (s == n) printf ("1");
	else printf ("0");
	return 0;
}