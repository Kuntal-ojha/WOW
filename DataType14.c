// This is the auto int, register int, static int, Uses.
// Created by KUNTAL OJHA RAJ on 8/3/2020.
// Example of Exercise A [c]
#include <stdio.h>
int main()
{
    func();
    func();
    return 0;
}
void func()
{
  auto int i=0;
  register int j=0;
  static int k=0;
  i++;j++;k++;
  printf("i=%d\nj=%d\nk=%d\n\n",i,j,k);
}