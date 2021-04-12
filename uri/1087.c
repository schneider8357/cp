#include <stdio.h>

int abs(int n){
	return n>=0 ? n : -n;
}

int solve(int qx, int qy, int dx, int dy){
	if (qx == dx && qy == dy)
		return 0;
	if (qx == dx || qy == dy)
		return 1;
	if (abs(qx-dx) == abs(qy-dy))
		return 1;
	return 2;
}

int main(){
	int qx, qy, dx, dy;
	while (scanf("%d %d %d %d",&qx,&qy,&dx,&dy), qx != 0)
		printf("%d\n", solve(qx,qy,dx,dy));
	return 0;
}
