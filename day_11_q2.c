// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main () {

    float cp, sp, p, l;

    printf("Enter Cost_Price & Selling_Price: ");
    scanf("%f %f", &cp, &sp);

    if (cp==sp)
    printf("No profit, No loss");
    
    else if (sp>cp) {
    p= (((sp-cp)/cp)*100);
    printf("Profit %.2f %%", p);
    }

    else {
    l=(((cp-sp)/cp)*100);
    printf("Loss %.2f %%", l);
    }
    

    return 0;
    
}