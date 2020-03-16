#include <stdio.h>

int main()
{
    int locks, stocks, barrels, sales, flag = 0;
    float commission;

    printf("Enter the no of locks, stocks and barrels: ");
    scanf("%d%d%d", &locks, &stocks, &barrels);

    if (locks <= 0 || locks > 70)
    {
        printf("Locks is out of range.\n");
        flag = 1;
    }
    if (stocks <= 0 || stocks > 80)
    {
        printf("Stocks is out of range.\n");
        flag = 1;
    }
    if (barrels <= 0 || barrels > 70)
    {
        printf("Barrels is out of range.\n");
        flag = 1;
    }
    if (flag == 1)
        return 0;

    sales = (locks * 45) + (stocks * 30) + (barrels * 25);
    if (sales <= 1000)
    {
        commission = 0.1 * sales;
    }
    else if (sales <= 1800)
    {
        commission = 0.1 * 1000;
        commission += 0.15 * (sales - 1000);
    }
    else
    {
        commission = 0.1 * 1000;
        commission = 0.15 * 800;
        commission += 0.2 * (sales - 1800);
    }

    printf("Total sales: %d\n", sales);
    printf("Total commission: %f\n", commission);
}
