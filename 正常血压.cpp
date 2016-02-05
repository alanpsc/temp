#include <cstdio>;
int main() 
{
    int n,D,S,sum;
    scanf("%d\n",&n);
	for(int i=1;i<=n;++i){
	   scanf("%d %d\n",&D,&S);
            if((90<=S<=140)&&(60<=D<=90)){
               sum+=1;
			}
    }
    printf("%d",sum);
     return 0;
}
