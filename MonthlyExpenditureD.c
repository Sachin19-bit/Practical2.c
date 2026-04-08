/*Print monthly expenditure\
Pratical 2, part 2(d)
@author: Sachin Kumar Chaudhary */

#include <stdio.h> 

int main(){
    
    //declaring variables without values - user will type the values
    float foodExpenses;  //food expenses
    float leisureExpenses; //leisure expenses
    float clothesExpenses; //clothes expesnses
    float accommodationExpenses; //accommodotion expenses
    float travelExpenses; //travel expenses
    float totalExpenses; //for total ex[emses spent

    //asks users to enter the values for value of each variable

    //for food expenses
    printf("\n Enter food expenses:");
    scanf("%f", &foodExpenses);

    //for leisure expenses
    printf("\n Enter leisure expenses:");
    scanf("%f", &leisureExpenses);

    //for clothes expenses 
    printf("\n Enter clothes Expenses:");
    scanf("%f", &clothesExpenses);

    //for accommodation expenses
    printf("\n Enter accommodation expenses:");
    scanf("%f", &accommodationExpenses);

    //for travel expenses
    printf("\n Enter travel expenses:");
    scanf("%f", &travelExpenses);

    //calcculating the total expenses 
    totalExpenses = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses; 

    //print the total expensess, shows the result 

    printf("\n The total expenditure of this month was Rs. %.2f \n\n", totalExpenses);

    return 0;

}