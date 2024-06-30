#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int t=n%10;
	while(n/10){
		t=t*((n/10)%10);
		n=n/10;	
	}
	printf("%d", t);
	return 0;
}