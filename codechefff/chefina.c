/*Chefina decided to move into Chef's apartment.
Chef was initially paying a rent of 
X rupees. Since Chefina is moving in, the owner decided to double the rent.
Find the final rent Chef needs to pay.
Input Format
The input consists of a single integer X, denoting the rent Chef was initially paying.*/
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    int final_rent = 2 * X;
    printf("%d\n", final_rent);
    
    return 0;
}
