//
// Created by KUNTAL OJHA RAJ on 8/30/2020.
//
#include <stdio.h>
int main()
{
    int A0HT=1189,A0WD=841;
    int A1HT,A1WD;
    int A2HT,A2WD;
    int A3HT,A3WD;
    int A4HT,A4WD;
    int A5HT,A5WD;
    int A6HT,A6WD;
    int A7HT,A7WD;
    int A8HT,A8WD;
    printf("Size of A0 Paper Height=%d & Width=%d\n",A0HT,A0WD);
    A1HT=A0HT/2;
    printf("Size of A1 Paper Height=%d & Width=%d\n",A0WD,A1HT);
    A2HT=A0WD/2;
    printf("Size of A2 Paper Height=%d & Width=%d\n",A1HT,A2HT);
    A3HT=A1HT/2;
    printf("Size of A3 Paper Height=%d & Width=%d\n",A2HT,A3HT);
    A4HT=A2HT/2;
    printf("Size of A4 Paper Height=%d & Width=%d\n",A3HT,A4HT);
    A5HT=A3HT/2;
    printf("Size of A5 Paper Height=%d & Width=%d\n",A4HT,A5HT);
    A6HT=A4HT/2;
    printf("Size of A6 Paper Height=%d & Width=%d\n",A5HT,A6HT);
    A7HT=A5HT/2;
    printf("Size of A7 Paper Height=%d & Width=%d\n",A6HT,A7HT);
    A8HT=A6HT/2;
    printf("Size of A8 Paper Height=%d & Width=%d\n",A7HT,A8HT);
    return 0;
}
