# Job Scheduling with Deadlines (Greedy Algorithm)

## Project Description

This project implements a **Greedy Algorithm** to schedule jobs with deadlines in order to maximize total profit.

Each job has:

* Job ID
* Deadline
* Profit

The goal is to complete jobs within their deadlines while achieving maximum profit.



## Algorithm Used

**Greedy Method**

### Steps:

1. Sort all jobs in **descending order of profit**
2. Select the job with highest profit first
3. Assign it to the **latest available slot before its deadline**
4. Repeat for remaining jobs



## Features

* Add jobs with ID, deadline, and profit
* Display job list
* Schedule jobs efficiently
* Calculate maximum profit
* Includes both:

  * Modular implementation (multiple files)
  * Single-file version (`combined.c`) for easy execution



## How to Run

### Modular Version

```
gcc main.c job.c schedule.c display.c -o jobs
./jobs
```

### Single File Version

```
gcc combined.c -o jobs
./jobs
```


## Sample Input

```
Number of jobs: 5

ID  Deadline  Profit
1   2         100
2   1         19
3   2         27
4   1         25
5   3         15
```



## Sample Output

```
--- Scheduled Jobs ---
Slot 1 -> Job 3
Slot 2 -> Job 1

Total Profit = 127
```


## Time Complexity

* Sorting: O(n²)
* Scheduling: O(n²)

Overall Complexity: **O(n²)**



## Real-World Applications

* Task scheduling in operating systems
* Project planning and management
* Job sequencing in industries



## Team Members

* N.Shanmuka Abhiram - @Abhi66679
* K.Yaswanth
* V.Sathvik



## Conclusion

This project demonstrates how a **Greedy Algorithm** can be used to make optimal decisions step-by-step to maximize profit efficiently.
