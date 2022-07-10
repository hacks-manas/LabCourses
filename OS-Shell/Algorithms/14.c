#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n, i, PID[100], BT[100], timer = 0, TAT[100], totalTAT = 0, WT[100], totalWT = 0, remT[100], TS, count;
    bool flag = true;
    
    printf("\nEnter number of processes: ");
    scanf("%d", &n);
    
    count = n;
    
    printf("Enter burst time of -\n");
    for (i = 0; i < n; i++) {
        printf("process %d: ", i + 1);
        scanf("%d", &BT[i]);
        PID[i] = i + 1;
        remT[i] = BT[i];
    }

    printf("\nEnter value of time quanta: ");
    scanf("%d", &TS);

    while (count) {
        if (remT[i] == 0) {
            i++;
            i %= n;
            continue;
        }
        else if (remT[i] > TS) {
            timer += TS;
            remT[i] -= TS;
        }
        else if (remT[i] <= TS) {
            timer += remT[i];
            remT[i] = 0;
            TAT[i] = timer - 0;
            WT[i] = TAT[i] - BT[i];
            count--;
        }
        i++;
        i = i % n;
    }
    


for (i = 0; i < n; i++) {
        totalTAT += TAT[i];
        totalWT += WT[i];
    }
    printf("Process ID\tBurst Time\tTurn Around Time\tWaiting Time");
    for (i = 0; i < n; i++) {
        printf("\n\t%d\t\t%d\t\t%d\t\t\t%d", PID[i], BT[i], TAT[i], WT[i]);
    }
    printf("\nAverage Turn around time = %.4f", 1.0 * totalTAT / n);
    printf("\nAverage waiting time = %.4f", 1.0 * totalWT / n);
    return 0;
}
