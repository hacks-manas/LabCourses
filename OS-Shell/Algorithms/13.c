#include <stdio.h>

void sort(int a[], int b[], int n) {
	int t, i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (b[j] > b[j + 1]) {
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;

				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main(void) {
	int n, i, PID[100], BT[100], timer = 0, TAT[100], totalTAT = 0, WT[100], totalWT = 0;
	printf("\nEnter number of processes: ");
	scanf("%d", &n);
	printf("Enter burst time of -\n");
	for (i = 0; i < n; i++) {
		printf("process %d: ", i + 1);
		scanf("%d", &BT[i]);
		PID[i] = i + 1;
	}
	sort(PID, BT, n);
	for (i = 0; i < n; i++) {
		timer += BT[i];
		TAT[i] = timer;
		totalTAT += TAT[i];
		WT[i] = TAT[i] - BT[i];
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