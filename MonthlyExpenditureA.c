/*Print monthly expenditure\
Pratical 2, part 2(a)
@author: Sachin Kumar Chaudhary */

#include <stdio.h>
int main(){
       
    //define variables and assign values to them 
    float foodExpenses = 300.0; //variable for food expenses   
    float leisureExpenses = 100.0; //assign 100.0 to leisureExpenses 
    float clothesExpenses = 50.0; 

    float totalExpenses; //variable for total expenses

    totalExpenses = foodExpenses + leisureExpenses + clothesExpenses;
    //print the total expenses
    printf("The total expenditure of this month was: Rs.%.2f\n\n", totalExpenses);

    return 0;
}