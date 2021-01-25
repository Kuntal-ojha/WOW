// Created by KUNTAL OJHA RAJ on 1/13/2021.
// To write a program to implement cpu scheduling algorithm for shortest job first scheduling.
// PROGRAM: (SHORTEST JOB FIRST SCHEDULING)
// Made by:Abhishek Garai CSE
/*
1. Start the program. Get the number of processes and their burst time.
2. Initialize the waiting time for process 1 as 0.
3. The processes are stored according to their burst time.
4. The waiting time for the processes are calculated a follows:
for(i=2;i<=n;i++).wt.p[i]=p[i=1]+bt.p[i-1].
5. The waiting time of all the processes summed and then the average time is calculate
6. The waiting time of each processes and average time are displayed.
7. Stop the program.
 */
//PROGRAM: (SHORTEST JOB FIRST SCHEDULING)
#include<stdio.h>
#include<conio.h>
struct process
{
    int pid;
    int bt;
    int wt;
    int tt;
}p[10],temp;
int main()
{
    int i,j,n,totwt,tottt;
    float avg1,avg2;
    printf("\nEnter the number of process:\n\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p[i].pid=i;
        printf("\nEnter the burst time for process %d\n\t",i);
        scanf("%d",&p[i].bt);
    }
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++)
        {
            if(p[i].bt>p[j].bt)
            {
                temp.pid=p[i].pid;
                p[i].pid=p[j].pid;
                p[j].pid=temp.pid;
                temp.bt=p[i].bt;
                p[i].bt=p[j].bt;
                p[j].bt=temp.bt;
            }}}
    p[1].wt=0;
    p[1].tt=p[1].bt+p[1].wt;
    i=2;
    while(i<=n){
        p[i].wt=p[i-1].bt+p[i-1].wt;
        p[i].tt=p[i].bt+p[i].wt;
        i++;
    }
    i=1;
    totwt=tottt=0;
    printf("\nProcess id \tbt \twt \ttt");
    while(i<=n){
        printf("\n\t%d \t%d \t%d \t%d\n",p[i].pid,p[i].bt,p[i].wt,p[i].tt);
        totwt=p[i].wt+totwt;
        tottt=p[i].tt+tottt;
        i++;
    }
    avg1=totwt/n;
    avg2=tottt/n;
    printf("\nAVG1=%f\t AVG2=%f",avg1,avg2);
    getch();
    return 0; }