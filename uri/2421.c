#include <stdio.h>


int x,y,w1,h1,w2,h2;

int solve(){
	/*
	x, y
	*/
	if(w1+w2 <= x && h1<=y && h2<=y)
		return 1;
	if(h1+w2 <= x && w1<=y && h2<=y)
		return 1;
	if(w1+h2 <= x && h1<=y && w2<=y)
		return 1;
	if(h1+h2 <= x && w1<=y && w2<=y)
		return 1;
	/*
	y, x
	*/
	if(w1+w2 <= y && h1<=x && h2<=x)
        return 1;
    if(h1+w2 <= y && w1<=x && h2<=x)
        return 1;
    if(w1+h2 <= y && h1<=x && w2<=x)
        return 1;
    if(h1+h2 <= y && w1<=x && w2<=x)
        return 1;
	return 0;
}

int main(){
	scanf("%d %d %d %d %d %d",&x,&y,&w1,&h1,&w2,&h2);
	printf("%c\n",solve()?'S':'N');
	return 0;
}
