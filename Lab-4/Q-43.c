/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW. 
 
     If    sales<=Rs. 500, commission is 5% 
     If    sales>500 but <=2000, commission is Rs. 35 plus 10% above Rs. 500 
     If    sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000 
     If   sales>5000, commission is 12.5%
*/
#include<stdio.h>
int main()
{
    float sales,commission;
    printf("Enter the sales: ");
    scanf("%f",&sales);
    if(sales<=500 && sales>=0)  
    {
        commission=0.05*sales; //calculating commission for sales<=500
        printf("The commission for the sales is: %f",commission);
    }
    else if(sales>500 && sales<=2000)
    {
        commission=35+0.1*(sales-500); //calculating commission for sales>500 and sales<=2000
        printf("The commission for the sales is: %f",commission);
    }
    else if(sales>2000 && sales<=5000)
    {
        commission=185 + 0.12*(sales-2000); //calculating commission for sales>2000 and sales<=5000
        printf("The commission for the sales is: %f",commission); 
    }
    else if(sales>5000)
    {
        commission= 0.125*sales; //calculating commission for sales>5000
        printf("The commission for the sales is: %f",commission);
    }
    else
    printf("Enter positive sales");
}

