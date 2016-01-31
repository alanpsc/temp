#include <cstdio>;
int main() 
{
    float x1,x2,a,b,c;
	scanf("%f %f %f",&a,&b,&c);
     x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	 x2=(-b+sqrt(b*b-4*a*c))/(2*a);
	 if(b*b==4*a*c)
		 printf("x1=x2=%.5f",x1);
	 else if(b*b>4*a*c)
		 printf("x1=%.5f,x2=%.5f",x1,x2);
	 else 
		 printf("x1=-b/(2*a)+sqrt(4*a*c-b*b)/(2*a)i,x2=-b/(2*a)-sqrt(4*a*c-b*b)/(2*a)i");
     return 0;
}
