#include <stdio.h>
#include "job.h"

void scheduleJobs();
void displayJobs();

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
