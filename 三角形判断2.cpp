#include <cstdio>
int main() 
{
       unsigned a, b, c;
        scanf("%u %u %u",&a, &b, &c);
	if(a + b > c && a + c > b && b + c > a) {
		printf("YES");
	}
	else {
	    printf("NO");
	}
    return 0;
}
