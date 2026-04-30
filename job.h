#ifndef JOB_H
#define JOB_H

#define MAX 100

typedef struct {
    int id;
    int deadline;
    int profit;
} Job;

extern Job jobs[MAX];
extern int n;

void addJobs();
void sortJobs();

#endif
