#include <cstdio>
int main() 
{
     unsigned m,n;
     int sum=0;
     scanf("%u %u",&m,&n);
     if(n%2==1){
        for( ;m<=n&&n<=300;m+=2){
        sum+=m;
        }
    }
    else if(n%2==0){
    	for( ;m<n&&n<=300;m+=2){
        sum+=m;
        }
	}
     printf("%d",sum);
     return 0;
}
