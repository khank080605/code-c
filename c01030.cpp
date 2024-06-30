#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1; i<=n; ++i){
		int a;
		scanf("%d", &a);
		int b=2;
		while (b*b<=a){
			if(a%b==0){
			int c=0;
			for (int j=2;j*j<=b;++j) if(b%j==0) ++c;
			if (c==0) printf("%d ",b);
			a=a/b;
		}
		else ++b;
		}
		printf ("%d\n",a);
	}
	return 0;
}