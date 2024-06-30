#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for (int j=1; j<=a; ++j){
	long long n;
	scanf("%lld", &n);
	if (n<2) printf("NO\n");
	else{
	int c=0;
	for (int i=2; i*i<=n; ++i)	if (n%i==0) c++;
	if (c==0) printf("YES\n");
	else printf("NO\n");
	}
	}
}