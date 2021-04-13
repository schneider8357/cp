#include <stdio.h>

unsigned long long int x,y,ans;

int main(){
	while(scanf("%llu %llu",&x,&y),x!=0||y!=0){
		x^=y;
		for(ans=0;x>0;x>>=1){
			ans+=x&1;
		}
		printf("%llu\n",ans);
	}
	return 0;
}
