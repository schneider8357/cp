#include <stdio.h>

int main(){
	int L, C;
	scanf("%d %d",&L,&C);
	printf("%d\n%d\n",L*C + (L-1)*(C-1),(L-1)*2 + (C-1)*2);
	return 0;
}
