// Use of  strcmp() Function
// Created by KUNTAL OJHA RAJ on 8/25/2020.
// One More Example of String.
#include <stdio.h>
#include <string.h>
int main()
{
    char string1[]="Jerry";
    char string2[]="Ferry";
    int i,j,k;
    i=strcmp(string1,"Jerry");
    /*
     * J-J=74-74=0
     * So Answer is 0
     */
    j=strcmp(string1,string2);
    /*
   * Hear J-F=74-70=4
   * If Answer is Positive Then (1)
   * If Answer is Negative Then (-1)
   * So Answer is 1
   */
    k=strcmp(string1,"Jerry boy");
    /* '\0' ASCII Value is (-32)
     * So 0-(-32)=-32 So K=-1 Because If Answer is Positive Then (1) And
     *  If Answer is Positive Then (1)
     *  So Answer is -1
     *  */
    printf("i=%d\nj=%d%\nk=%d",i,j,k);
    return 0;
}

