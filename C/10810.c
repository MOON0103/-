#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *basket = (int *) malloc(sizeof(int) * (n+1));
    for (int i = 1; i <= n; i++) {
        basket[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int start, end, score;
        scanf("%d %d %d", &start, &end, &score);

        for (int j = start; j <= end; j++) {
            basket[j] = score;
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", basket[i]);
    }

    free(basket);
    return 0;
}
