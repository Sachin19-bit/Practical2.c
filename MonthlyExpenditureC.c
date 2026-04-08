/*Print monthly expenditure\
Pratical 2, part 2(c)
@author: Sachin Kumar Chaudhary */

#include <stdio.h>
int main(){
       
    //define variables and assign values to them 
    float foodExpenses = 8000.0;  //food expenses   
    float leisureExpenses = 3000.0; // leisure expenses
    float clothesExpenses = 500.0; // clothes expenses
    float accommodationExpenses = 2000.0; // accommodation expenses
    float travelExpenses = 1500.0; // travel expenses

    float totalExpenses; //for total expenses

    totalExpenses = foodExpenses + leisureExpenses + clothesExpenses + accommodationExpenses + travelExpenses;
    //print the total expenses
    printf("The total expenditure of this month was: Rs. %.2f\n\n", totalExpenses);

    return 0;
}