#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
		if(a){
			float delta=b*b-4*a*c;
			if (delta<0) printf("\nNO");
			if (delta == 0) printf("\n%.2f",-b/(2*a));
			else printf("\n%.2f %.2f", (-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
		}
		else{if (b) printf("%.2f",-c/b);
			else printf("NO");
		}
	return 0;
	}