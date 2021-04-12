#include <stdio.h>


char * solve(int k, int q, int move){
	if (k == q)
		return "Illegal state\n";
	if (q == move || k == move || ((q%8 != move%8) && (q/8 != move/8)))
		return "Illegal move\n";
	if (((k%8 == q%8) || (k/8 == q/8)) && ((k%8 == move%8) || (k/8 == move/8)) && ((q>k && move<k) || (q<k && move>k)))
		return "Illegal move\n";
	if ((move == k+1 && k%8 != 7) || (move == k-1 && k%8 != 0) || (move == k+8 && k/8 != 7) || (move == k-8 && k/8 != 0))
		return "Move not allowed\n";
	if ((k==0 && move==9) || (k==7 && move == 14) || (k==56 && move==49) || (k==63 && move==54))
		return "Stop\n";
	return "Continue\n";
}

int main(){
	int k, q, move;
	while (scanf("%d %d %d", &k, &q, &move) != EOF) {
		printf("%s", solve(k, q, move));
	}
	return 0;
}
