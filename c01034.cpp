#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int c=0,d=0;
	for (int i=m; i<=n; ++i) {
	int k=sqrt(i);
	if (i==k*k) {
	d=k;
	break;
	}
	}	
	for (int j=d;j*j<=n; ++j) ++c;
	printf("%d\n", c);
	for (int j=d;j*j<=n; ++j) printf("%d\n", j*j);
	return 0;
}
	