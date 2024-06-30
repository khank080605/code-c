#include <stdio.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	if (a) printf("\n%.2f",a/b);
	else if (b) printf("Vo nghiem");
		else printf("Vo so nghiem");
	return 0;
}