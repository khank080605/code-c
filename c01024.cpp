#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		long long a;
		scanf("%lld",&a);
		int s=a%10,t,j=0 ;
		while (a){
			t=a%10;
			a=a/10;
			++j;
		}
	if (t==s) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}