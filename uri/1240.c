#include <stdio.h>
#include <math.h>

int main(){
	int n,a,b,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		if(b==0&&a%10!=0)
			a=-1;
		a-=b;
		for(i=0;b>0;b/=10)
			i++;
		printf("%s\n", (a==0||(a>0&&a%(int)pow(10,i)==0)) ? "encaixa" : "nao encaixa");
	}
	return 0;
}
