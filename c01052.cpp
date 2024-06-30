#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	for (int i=1; i<=n; i++){
		int m, k=0;
		scanf ("%d", &m);
		for (int j=1; j*j<=m; j++) if (m%j == 0){
			if (j%2 == 0) k++;
			if (((m/j)%2 == 0) && (j != m/j)) k++;
		}
	printf ("%d\n", k);
	}
	return 0;
}