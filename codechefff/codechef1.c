
/*Mamalesh likes to drink mango lassi when it's hot, and only when it's hot. If (and only if) the temperature on a given day is strictly greater than 
35
35 degrees, Mamalesh will drink mango lassi.

Mamalesh sees that today's temperature is 
�
X degrees Celsius. Will he drink mango lassi today?
Print "Yes" if he will, and "No" otherwise (without quotes).*/


#include <stdio.h>

int main() {
    int t, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &x); 
        if (x > 35) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

