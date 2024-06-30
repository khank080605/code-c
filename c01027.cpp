#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; ++i){
		int a,b,j=0;
		scanf("%d %d", &a, &b);
		while (a!=b){
			if (a>b) a=a-b;
			else b=b-a;
			++j;
		}
	printf("%d\n",a);
	}
	return 0;
}