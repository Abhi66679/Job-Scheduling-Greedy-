#include <stdio.h>
#include "job.h"

void displayJobs() {
    printf("\n--- Jobs List ---\n");

    for (int i = 0; i < n; i++) {
        printf("ID: %d | Deadline: %d | Profit: %d\n",
               jobs[i].id, jobs[i].deadline, jobs[i].profit);
    }
}
