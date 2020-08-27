// This ids one more Example in Automatic Storage Program.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// This a Data typle program.
#include<stdio.h>
int main()
{
    auto int i=1;
    {
        auto int i=2;
        {
            auto i=3;
            {
                auto i=4;
                printf("%d\n",i);
            }
            printf("%d\n",i);
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}

