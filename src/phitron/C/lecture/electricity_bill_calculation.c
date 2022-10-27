#include <stdio.h>
int main()
{
    char name[20];
    int id;
    float unit, total, all_total, sur_charge, charge;
    printf("Customer Id: ");
    scanf("%d", &id);
    printf("Name: ");
    scanf(" %s", &name);
    printf("Unit: ");
    scanf("%f", &unit);

    printf("Customer IDNO :%d\n", id);
    printf("Customer Name :%s\n", name);
    printf("Unit Consumed :%.2f\n", unit);

    if (unit <= 199)
    {
        charge = 1.20;
        total = unit * charge;
        if (total >= 400)
        {
            sur_charge = total * 15 / 100;
            all_total = total + sur_charge;
        }
        else if (total <= 100)
        {
            all_total = 100;
        }
        else
        {
            all_total = total;
        }
    }

    else if (unit <= 200 && 400 >= unit)
    {
        charge = 1.50;
        total = unit * charge;
        if (total >= 400)
        {
            sur_charge = total * 15 / 100;
            all_total = total + sur_charge;
        }
        else if (total <= 100)
        {
            all_total = 100;
        }
        else
        {
            all_total = total;
        }
    }
    else if (unit <= 400 && 600 >= unit)
    {
        charge = 1.80;
        total = unit * charge;
        if (total >= 400)
        {
            sur_charge = total * 15 / 100;
            all_total = total + sur_charge;
        }
        else if (total <= 100)
        {
            all_total = 100;
        }
        else
        {
            all_total = total;
        }
    }
    else
    {
        charge = 2.00;
        total = unit * charge;
        if (total >= 400)
        {
            sur_charge = total * 15 / 100;
            all_total = total + sur_charge;
        }
        else if (total <= 100)
        {
            all_total = 100;
        }
        else
        {
            all_total = total;
        }
    }

    printf("Amount Charges @Rs. %.2f per unit :%.2f\n", charge, total);
    printf("Surcharge Amount : %.2f\n", sur_charge);
    printf("Net Amount Paid By the Customer : %.2f\n", all_total);
}
