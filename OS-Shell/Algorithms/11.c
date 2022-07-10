/* Write a C program to implement fork system call() */

/*
 * If fork() returns a negative value, the creation of a child process was unsuccessful.
 * fork() returns a zero to the newly created child process.
 * fork() returns a positive value, the process ID of the child process, to the parent. 
 * The returned process ID is of type pid_t defined in sys/types.h. 
 * Normally, the process ID is an integer. Moreover, 
 * a process can use function getpid() to retrieve the process ID assigned to this process.
 */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX_COUNT 10
#define BUF_SIZE 100

void main(void)
{
    pid_t pid;
    int i;
    char buf[BUF_SIZE];

    fork();
    pid = getpid();
    for (i = 1; i <= MAX_COUNT; i++)
    {
        sprintf(buf, "This line is from pid %d, value = %d\n", pid, i);
        write(1, buf, strlen(buf));
    }
}