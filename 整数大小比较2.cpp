#include <cstdio>

int main () {
	unsigned int num1;
	int num2;
	scanf ("%u%d", &num1, &num2);
	
	if (num2 >= 0 && num1 > num2 || num2 < 0) {		
		printf (">");
	}
	else if ( num2 >= 0 && num1 == num2) {
		printf ("=");
	}
	else if (num2 >=0 && num1 < num2) {
		printf ("<");
	}
		
	return 0;
}
