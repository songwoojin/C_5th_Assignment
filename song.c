#include <stdio.h> 
 
int main(void){ 
int i, j; 
double a[50][50] = {0,1}; 
a[1][1] = 1; 
	for (i = 1; i <= 50 ; i++) 
		{ 
		for (j = 1; j <= i; j++) 
			{ 
			a[i][j] = a[i-1][j-1] + a[i-1][j]; 
			printf("%.0f ", a[i][j]); 
			} 
		puts(""); 
		}  
return 0; 
} 
