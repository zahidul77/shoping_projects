#include <stdio.h>


/*function decleration*/
int total_item_price(int item);
double tax_calculation(int TotalAmount);
double return_money(double price, int x);



/////////////////////////// main function ///////////////////////////////
int main(void)
{


    int choice;

    printf("\tWelcome to Z mart\n");
    printf("\t==================\n");

    printf("\tTO view next page type (1) or \t\n ");
    printf("\tIf you don't want to shoping type (0): \t ");

    scanf("%d", &choice);

        if(choice == 1){

                system("cls");
            printf("\n\t ============ *Start shoping* ============\n");


            ///////////////////
            int item, total_price, price;
            printf("\t How many product do you want ==> ");
            scanf("\t%d",&item);

            /// function call of total item choice and price
                price = total_item_price(item);
                printf("\tTotal Price = %d\n\t",price);

            /// total final price with tax
                double PriceWithTax = tax_calculation(price);
                printf("Final price with Tax =>%f", PriceWithTax);
                printf("\n");
                printf("\n");

            /// function call of give money and return money
                int x;

                printf("\tYou pay =>\t");
                scanf("%d",&x);
                printf("\n");

                double back_money ;
                back_money = return_money(PriceWithTax, x);
                printf("\tMoney back =>%f\t\n",back_money);

        }
        else if(choice == 0 ){

                system("cls");
                printf("Thanks and Come Again ");
        }


    return 0;
}

/*...........................................................
                      function start
.......................................... ..................
*/

/// function defination of total item choice and price
int total_item_price(int item){
    int Quantaty, Price, TotalAmount = 0;

    char name[0];
    for(int i=1 ; i<=item ; i++){
        printf("\t\t\nProduct: %d\n",i);

        /// product name, quantaty,price input
        printf("\tEnter product name =>\t");
        scanf("%s",&name);

        printf("\tEnter Qantaty =>\t");
        scanf("%d", &Quantaty);

        printf("\tEnter Price =>\t\t");
        scanf("%d",&Price);

        /// total price amount calculating
        printf("\n");
        TotalAmount = TotalAmount + Quantaty * Price;


    }

    return TotalAmount;
}


/// function of tax calculation of total price

double tax_calculation(int TotalAmount){
    double tax  = TotalAmount * 0.15;
    TotalAmount = tax + TotalAmount;

    return TotalAmount;
}


/// function of given money and return money
double return_money(double PriceWithTax, int x){

    return x - PriceWithTax;

}

