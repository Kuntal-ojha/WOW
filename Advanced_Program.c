// Make a file in E drive File name is CSE.text
// File material is:
// Have a nice day ;
// Created by SHAMIR BANARJEE on 9/26/2020.
// Vary Creative Program & vary Interesting Use some new Keyword like
// fopen,fprintf,fclose,fgetc .........Then go Ahade
#include <stdio.h>
#include <conio.h>
#include "stdio.h"
int main()
{
    char ch,name[18];
    int i,j=0;
    FILE *p,fp2;
    p=fopen("E:\\CSE.txt","w");
    fprintf(p,"Have a nice day ;");
    // "Have a nice day ;" this sentence will be store in E drive CSE.txt file.
    fclose(p);// u have to close the CSE.txt file.
    p=fopen("E:\\CSE.txt","r"); // open the file again to read something from file.
    while(1)
    {
        ch=fgetc(p);// using fgetc(fp1) file pointer we can read something from file db.txt
        name[j]=ch; // each character will be store in array name[j];
        j=j+1; // file pointer will be increase to read next character from CSE.txt file
        if(ch==':') // if ; present in the CSE.txt file than read will be stop
            break;
    }
    for(i=0;i<j-1;i++)
        printf("%c",name[i]); // display all the character from CSE.txt file.
    fclose(p);
}
