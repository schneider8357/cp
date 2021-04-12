#include <stdio.h>

int n,m;

char * solve(int x, int y){
	if (x==n||y==m)
		return "divisa";
	if (x>n)
		return y>m ? "NE" : "SE";
	return y>m?"NO":"SO";
}

int main(){
	int k,x,y;
	while(scanf("%d %d %d",&k,&n,&m),k){
		while(k--){
			scanf("%d %d",&x,&y);
			printf("%s\n",solve(x,y));
		}
	}
	return 0;
}
