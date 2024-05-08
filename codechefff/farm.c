#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int N;
        scanf("%d", &N); 
        int x= N / 4;
        int y = 0;

        
        int m = N % 4;
        if (m != 0) {
           
            y = m / 2; 
        }

        
        int p = x + y;
        printf("%d\n", p);
    }

    return 0;
}
