#include <stdio.h>
int main (){
	int r, c;
	scanf ("%d %d", &r, &c);
	for (int i=0; i<c; i++) {
		for (int j=0; j<r; j++){
			if ((i==0) || (i==c-1)) printf ("*");
			else if ((j==0) || (j==r-1)) printf ("*");
			else printf (" ");
		}
		printf ("\n");
	}
	return 0;
}