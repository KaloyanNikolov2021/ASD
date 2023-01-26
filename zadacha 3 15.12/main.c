#include"quadraticroots.h"

int main(void){
    long double a, b, c;
    printf("\nVuvedi a: ");
    scanf("%llf", &a);
    printf("\nVuvedi b: ");
    scanf("%llf", &b);
    printf("\nVuvedi svoboden chlen: ");
    scanf("%llf", &c);
    QuadraticRootsResult result = findroots(a, b , c);
    if(result.norealroots == 0){
        printf("\nX1 = %llf", result.x2);
        printf("\nX2 = %llf", result.x1);
    }else printf("\nNqma realni koreni");
}
