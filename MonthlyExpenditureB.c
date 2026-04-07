/*Print monthly expenditure\
Pratical 2, part 2(b)
@author: Sachin Kumar Chaudhary */

#include <stdio.h>
int main(){
       
    //define variables and assign values to them 
    float foodExpenses = 9000.0; //variable for food expenses   
    float leisureExpenses = 3000.0; //assign 100.0 to leisureExpenses 
    float clothesExpenses = 2500.0; 

    float totalExpenses; //variable for total expenses

    totalExpenses = foodExpenses + leisureExpenses + clothesExpenses;
    //print the total expenses
    printf("The total expenditure of this month was: Rs.%.2f\n\n", totalExpenses);

    return 0;
}