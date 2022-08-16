#include<stdio.h>
int main()
{
    //Variable Declaration
    int numberFan,numberLight,numberTV,dFan,dLight,dTV;
    float unit,totalEnergy,amount;

    //List of electric equipment with their wattage
    printf("List of electric equipment with their associated wattage:\n\n");
    printf("Power of Fan 80 wattage.\n");
    printf("Power of Light 60 wattage.\n");
    printf("Power of Television 60 wattage.\n\n");

    //Number of electric equipment & duration of each equipment
    printf ("Enter number of Fan:");
    scanf ("%d",&numberFan);
    printf("How many hours do you use Fan: ");
    scanf("%d",&dFan);

    printf ("\nEnter number of Light:");
    scanf ("%d",&numberLight);
    printf("How many hours do you use Light: ");
    scanf("%d",&dLight);

    printf ("\nEnter number of Television:");
    scanf ("%d",&numberTV);
    printf("How many hours do you use Television: ");
    scanf("%d",&dTV);

    //Calculation of total energy
    totalEnergy = (numberFan*dFan*80*30)+ (numberLight*dLight*60*30)+ (numberTV*dTV*60*30);
    unit=totalEnergy/1000;
    printf("\n\nTotal energy consumed by the user is  %.2f Unit.\n\n",unit);

    //Calculation of total Bill
    if(unit<=50 && unit>=0)
    {
        amount = unit * 3.50;
    }
    else if(unit<=75 && unit>50)
    {
        amount =unit* 4.00;
    }
    else if(unit<=200 && unit>75)
    {
        amount = unit* 5.45;
         }
    else if(unit<=300 && unit>200)
    {
        amount = unit* 5.70;
    }
     else if(unit<=400 && unit>300)
    {
        amount = unit* 6.02;
    }
    else if(unit<=600 && unit>400)
    {
        amount = unit* 9.30;
    }
    else
    {
        amount = unit* 10.70;
    }

    printf(" Total electricity bill is %.2f TK\n\n",amount);

    return 0;

}
