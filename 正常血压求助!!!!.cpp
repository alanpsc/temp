#include <cstdio>
int main() 
{
    int n,D,S,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
	scanf("%d %d",&D,&S);
        if(S>=90&&S<=140&&D>=60&&D<=90){
              sum+=1;
	 }
    }
    printf("%d",sum);
     return 0;
}
