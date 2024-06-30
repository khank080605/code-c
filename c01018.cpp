#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	printf("\n");
	for (int i=0;i<n;i++){
	long long a;
	scanf("%lld",&a);
	int d=sqrt(a);
	if (d*d==a) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
	
}