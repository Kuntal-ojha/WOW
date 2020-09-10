// Passing individual structure element.
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Passing Individual structure element.
#include <stdio.h>
struct book
{
    char name[25];
    char author[25];
    int call_no;
};
void display1 (char *,char *,int);
void display2(struct book);
void display3(struct book*);
int main()
{
    struct book b1={"Let us C","YPK",101};
    display1(b1.name,b1.author,b1.call_no);
    display2(b1);
    display3(&b1);
    return 0;
}
void display1(char *s,char *t,int n)
{
    printf("%s %s %d\n",s,t,n);
}
void display2(struct book b)
{
    printf("%s %s %d\n",b.name,b.author,b.call_no);
}
void display3(struct book *pb)
{
    printf("%s %s %d\n",pb->name,pb->author,pb->call_no);
}