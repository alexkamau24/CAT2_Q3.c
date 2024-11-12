#include <stdio.h>
int main(){
    float hours;
    float wage;
    float gross_pay;
    float taxes;
    float net_pay;
    
   //PROMPTING USER TO ENTER VALUES
    printf("Enter hours worked in a week: ");
    scanf("%f",&hours);
    printf("Enter hourly wage: ");
    scanf("%f",&wage);

    // GROSS_PAY
    if (hours <= 40) {
    gross_pay = hours * wage;
    } else {
    gross_pay = (40 * wage) + (hours - 40) * wage * 1.5; }
    
    // TAXES
    if (gross_pay <= 600) {
    taxes = gross_pay * 0.15;
    } else {taxes = (600 * 0.15) + (gross_pay - 600) * 0.20;}

    // NET_PAY
    net_pay = gross_pay - taxes;
    //FINAL OUTPUT
    printf("\nGross Pay: %.2f\n", gross_pay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net Pay: %.2f\n", net_pay);

    return 0;
}
