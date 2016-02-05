#include <cstdio>;
int main() 
{
     unsigned m,n;
     int sum=0;
     scanf("%u %u",&m,&n);
     for( ;m<=n;m+=2){
        sum+=m;
     }
     printf("%d",sum);
     return 0;
}
