// Storage of Structure Element
// Created by KUNTAL OJHA RAJ on 9/5/2020.
// Memory map of structure element
#include <stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1={'B',130.20,965};
    printf("Address of Name:%u\n",&b1.name);
    printf("Address of Price:%u\n",&b1.price);
    printf("Address of Pages:%u\n",&b1.pages);
    return 0;
}

