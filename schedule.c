#include <stdio.h>
#include "job.h"

void scheduleJobs() {
    int result[MAX];
    int slot[MAX] = {0};
    int totalProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                result[j] = jobs[i].id;
                slot[j] = 1;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    printf("\n--- Scheduled Jobs ---\n");
    for (int i = 0; i < n; i++) {
        if (slot[i])
            printf("Slot %d → Job %d\n", i + 1, result[i]);
    }

    printf("Total Profit = %d\n", totalProfit);
}
