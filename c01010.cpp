#include <stdio.h>
int main(){
	int d;
	scanf("%d", &d);
	int y=d/365;
	int m=(d%365)/7;
	int n=(d%365)%7;
	printf("\n%d %d %d", y,m,n);
	return 0;
}