#include<stdio.h>
float calculateDiscount(float amount ,char membership);
float calculatefinalbill(float amount, float discountAmount);
int main()
{
   char membership;
   float amount;
   printf("Enter the type of membership (p=platinum,g=gold,s=standard)");
   scanf(" %c",& membership);
   
   printf("Enter the shopping amount\n");
   scanf("%f",& amount);


float discountAmount=calculateDiscount(amount ,membership);
float finalbill=calculatefinalbill(amount, discountAmount);

printf("Discount amount is %.2f",discountAmount);
printf("Final payable amount is %.2f",finalbill);

}
float calculateDiscount(float amount ,char membership){

 float rate=0.0;
  if  (membership == 'P' || membership == 'p') {
        rate = 0.20;
    } else if (membership == 'G' || membership == 'g') {
        rate = 0.10;
    } else if (membership == 'S' || membership == 's') {
        rate = 0.05;
    }

    if(amount >10000){

        rate = rate*0.02;
    }
     return amount*rate;
}
   float calculatefinalbill(float amount, float discountAmount){
   float discountedAmount = amount - discountAmount;
    float tax = discountedAmount * 0.15;
    float shipping = 0.0;
    
    if (discountedAmount <= 5000) {
        shipping = 300.0;
    }
    
    float finalPayable = discountedAmount + tax + shipping;
    return finalPayable;

   }

