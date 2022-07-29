//WAP which takes the cost price and selling price of a product from the user.Now calculate and print profit or loss percentage.#include<stdio.h>
#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss,p,l;
    printf("Enter Cost Price & Selling Price:\t");
    scanf("%d %d",&cp,&sp);
    printf("Cost Price is %d and Selling price is %d\t",cp,sp);
    profit=sp-cp;
    loss=cp-sp;
    p=profit/cp*100;
    l=loss/sp*100;
    if(sp>cp)
        printf("Profit is %0.2f%%\t",p);
    else if(cp>sp)
        printf("Loss is %0.2f%%\t",l);
    else
    printf("No Profit & No Loss");
    return 0;
}
