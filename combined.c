#include <stdio.h>

#define MAX 100

typedef struct {
    int id;
    int deadline;
    int profit;
} Job;

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


void displayJobs() {
    printf("\n--- Jobs List ---\n");

    for (int i = 0; i < n; i++) {
        printf("ID: %d | Deadline: %d | Profit: %d\n",
               jobs[i].id, jobs[i].deadline, jobs[i].profit);
    }
}


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
            printf("Slot %d -> Job %d\n", i + 1, result[i]);
    }

    printf("Total Profit = %d\n", totalProfit);
}


int main() {
    int choice;

    while (1) {
        printf("\n--- Job Scheduling System ---\n");
        printf("1. Add Jobs\n");
        printf("2. Display Jobs\n");
        printf("3. Schedule Jobs\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addJobs();
                sortJobs();
                break;
            case 2:
                displayJobs();
                break;
            case 3:
                scheduleJobs();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
