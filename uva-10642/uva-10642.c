#include <stdio.h>
int P(int theCX, int theCY) {
    int S = theCX + theCY;
    return ((1 + S) * S / 2) + theCX;
}
int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    int i;
    for (i = 1; i <= N; i++) {
        int AX, AY, BX, BY;
        scanf("%d%d%d%d", &AX, &AY, &BX, &BY);
        printf("Case %d: %d\n", i, P(BX, BY) - P(AX, AY));
    }
    return 0;
}