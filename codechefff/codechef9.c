#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int weekly_cost = 6 * X + Y;

    printf("%d\n", weekly_cost);

    return 0;
}
