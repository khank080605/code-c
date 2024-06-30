#include "stdio.h"
#include "math.h"
int main(){
	long long n;
	scanf("%lld", &n);
	int s=0, i=1, t=n;
	
	while (t!=0){
		s+=t%10;
		t=t/10;
		++i;
	}
	printf("%d", s);
}