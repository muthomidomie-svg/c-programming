/*
Name:Dominic Muthomi
Reg NO:CT101/G/26556/25
Description:A program to calculate total sales of the day in a retail shop
Date:06/11/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *salesFile, *summaryFile;
    float amount, total = 0.0;
    int count = 0;
    time_t now;
    char timestamp[100];

    // Open sales.txt for reading
    salesFile = fopen("C:\\Users\\L3BOH's\\OneDrive\\Desktop\\dominic c programs\\sales.txt", "r");
    if (salesFile == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // Read transactions and compute total and count
    while (fscanf(salesFile, "%f", &amount) == 1) {
        total += amount;
        count++;
    }

    // Close sales file
    fclose(salesFile);

    // Display results
    printf("Number of transactions: %d\n", count);
    printf("Total sales for the day: %.2f KES\n", total);

    // Get current date and time
    time(&now);
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", localtime(&now));

    // Open summary file to log results
    summaryFile = fopen("daily_summary.txt", "a");
    if (summaryFile == NULL) {
        printf("Error: Could not open daily_summary.txt\n");
        return 1;
    }

    // Write summary to file with timestamp
    fprintf(summaryFile, "[%s] Transactions: %d, Total Sales: %.2f KES\n", timestamp, count, total);

    // Close summary file
    fclose(summaryFile);

    printf("Summary logged to daily_summary.txt\n");

    return 0;
}
