#include <stdio.h>

int t, m, n, i, j;
char C[21][21];
char name[4] = "vika";

int solve(int n, int m, char C[21][21], int curr, int letter) {
    if (letter == 4) {
        return 1;
    }
    if (curr >= m) {
        return 0;
    }
    for (i=0;i<n;i++) {
        if (C[i][curr] == name[letter]) {
            return solve(n,m,C,curr+1,letter+1);
        }
    }
    return solve(n,m,C,curr+1,letter);
}


int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d\n", &n, &m);
        for (i=0;i<n;i++)
            for (j=0;j<m;j++) {
                scanf(" %c", &C[i][j]);
            }
        printf("%s\n", m > 3 && solve(n,m,C,0,0) ? "YES" : "NO");
    }
    
    return 0;
}
