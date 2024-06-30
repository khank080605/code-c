#include "stdio.h"
int main(){
	int n;
	scanf("%d", &n);
	printf("\n");
	for (int i=1; i<=n; i++){
		long long m;
		scanf ("%lld", &m);
		int s=0, j=1;
		while (m!=0){
			s+=m%10;
			m=m/10;
			++j;
		}
		printf("%d\n", s);
	}
	return 0;
}