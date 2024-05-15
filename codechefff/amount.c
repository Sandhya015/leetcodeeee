#include <stdio.h>

int amount(int X, int Y) {
    int amount = X;
for (int i = 0; i < Y; i++) {
        if (amount * 2 > amount + 1000) {
            amount *= 2;
        } else { 
            amount += 1000;
        }
    }

    return amount;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 

        int result = amount(X, Y);
        printf("%d\n", result);
    }

    return 0;
}
