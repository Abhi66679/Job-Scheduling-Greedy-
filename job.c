#include <stdio.h>
#include "job.h"

Job jobs[MAX];
int n;

void addJobs() {
    printf("Enter number of jobs: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nJob %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &jobs[i].id);

        printf("Enter Deadline: ");
        scanf("%d", &jobs[i].deadline);

        printf("Enter Profit: ");
        scanf("%d", &jobs[i].profit);
    }
}

void sortJobs() {
    Job temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
}
