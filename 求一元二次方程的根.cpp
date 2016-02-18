#include <cstdio>
#include <cmath>
int main() 
{
    float x1, x2, x3, x4, a, b, c;
    char i;
	scanf("%f %f %f", &a, &b, &c);
     x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	 x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	 if(b*b==4*a*c){
		 printf("x1 = x2= %.5f", x1);
	}
	 else if(b*b > 4*a*c){
		 printf("x1 = %.5f,x2 = %.5f", x1, x2);
	}
	 else if(b*b < 4*a*c){
	 	x3 = -b/(2*a)+sqrt(4*a*c-b*b)/(2*a)*i;
	 	x4 = -b/(2*a)-sqrt(4*a*c-b*b)/(2*a)*i;
	}
		printf("x1=%.5fi,x2=%.5fi",x3,x4);
     return 0;
}
