#include <stdio.h>
#include <stdlib.h>

int main() {
    int choosepos;

    printf("Store Management System\n\nWhat would you like to do?\n1.Add/Remove/list Product(s)\n2.Add/List/Remove Sales\n");
    scanf("%d", &choosepos);
    
    switch(choosepos){
    case 1 :
        arlProducts();
        break;
    case 2 :
        arlSales();
        break;
    default :
        printf("Invalid Choice. Please try again.\n");
        return 1;
    }
    
    return 0;
}

void arlProducts() {
    
    char choiceProd;

    printf("Would you like to (A)dd, (R)emove, or (l)ist products?\n");
    scanf("%s", &choiceProd);

    /* switch (choiceProd) { */
    /*     case; */
    /* } */
}

void arlSales() {

    char choiceSales;
    /* A stands for Add, id stands for sale id */
    char choice3aid[255];
    /* PID stands for Product id */
    char choice3apid[255];
    /* SA stands for sold amount */
    char choice3asa[255];

    printf("Would you like too (A)dd, (L)ist, or (R)emove sales?\n");
    scanf("%s", &choiceSales);

    switch (choiceSales) {
        case 'a' :
            printf("What would you like the ID of the sale you are adding going to be?\n(if you dont know, list the sales list and look for the greatest ID and add 1.)\n");
            scanf("%s", &choice3aid);
            printf("What is the product that you sold id?\n(if you dont know, list the produts and look for the right product's id)\n");
            scanf("%s", &choice3apid);
            printf("How many products did you sell?");
            break;
        default :
            printf("Invalid Choice. Please try again.\n");
    }
}
