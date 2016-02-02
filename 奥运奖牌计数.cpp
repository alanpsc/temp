#include <cstdio>;
int main() 
{
     int n,a,b,c,G,S,B,sum;
     scanf("%d\n",&n);
	 for(int i=1;i<=n;++i) {
		 scanf("%d %d %d\n",&a,&b,&c);
	     G+=a;
		 S+=b;
		 B+=c;
         sum=G+S+B;
	 }
	    printf("%d %d %d",G,S,B,sum);	 
        return 0;
}
