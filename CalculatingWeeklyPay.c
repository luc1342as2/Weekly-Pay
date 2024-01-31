//Lucas Ghigli
//Weekly pay Program
//04/05/2023

#include <stdio.h>

int main() {
    int payCode;

    while (1) {
        printf("Enter the pay code (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker, -1 to exit): ");
        scanf("%d", &payCode);

        if (payCode == -1) {
            break;
        }

        double weeklyPay = 0.0;

        switch (payCode) {
            case 1:
                // Manager
                printf("Enter the fixed weekly salary for the manager: $");
                double managerSalary;
                scanf("%lf", &managerSalary);
                weeklyPay = managerSalary;
                break;

            case 2:
                // Hourly worker
                printf("Enter the fixed hourly wage for the hourly worker: $");
                double hourlyWage;
                scanf("%lf", &hourlyWage);

                printf("Enter the number of hours worked by the hourly worker: ");
                double hoursWorked;
                scanf("%lf", &hoursWorked);

                if (hoursWorked > 40) {
                    weeklyPay = 40 * hourlyWage + (hoursWorked - 40) * 1.5 * hourlyWage;
                } else {
                    weeklyPay = hoursWorked * hourlyWage;
                }
                break;

            case 3:
                // Commission worker
                printf("Enter the gross weekly sales for the commission worker: $");
                double grossSales;
                scanf("%lf", &grossSales);
                weeklyPay = 250 + 0.057 * grossSales;
                break;

            case 4:
                // Pieceworker
                printf("Enter the fixed amount of money for each item produced by the pieceworker: $");
                double pieceRate;
                scanf("%lf", &pieceRate);

                printf("Enter the number of items produced by the pieceworker: ");
                double numberOfItems;
                scanf("%lf", &numberOfItems);
                
                weeklyPay = numberOfItems * pieceRate;
                
            break;
            
            default:
            	printf("Invalid pay code. Please enter a valid pay code.\n");
            	continue;
            }
        }
        return 0;
    }
