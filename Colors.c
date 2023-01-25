#include<stdio.h>

#define KNPM "\x1B[0m" 
#define KRED "\x1B[1;31m" 
#define KGRN "\x1B[1;32m" 
#define KYEL "\x1B[1;33m" 
#define KBLU "\x1B[1;34m" 
#define KMAG "\x1B[1;35m" 
#define KCYN "\x1B[1;36m"
#define KWHT "\x1B[1;37m"

#define BKNRM "\x1B[0m" 
#define BKRED "\x1B[1;31m" 
#define BKGRN "\x1B[1;32m" 
#define BKYEL "\x1B[1;33m" 
#define BKBLU "\x1B[1;34m" 
#define BKMAG "\x1B[1;35m" 
#define BKCYN "\x1B[1;36m"
#define BKWHT "\x1B[1;37m"

int main()
{
    printf("%sred\n", KRED);
    printf("%sgreen\n", KGRN);
    printf("%syellow\n", KYEL);
    printf("%sblue\n", KBLU);
    printf("%ssmagenta\n", KMAG);
    printf("%scyan\n", KCYN);
    printf("%swhite\n", KWHT);
    printf("%s                   %s\n", BKNRM, KNPM);
    printf("%snormal\n", BKNRM);
    printf("%sred\n", BKRED);
    printf("%sgreen\n", BKGRN);
    printf("%syellow\n", BKYEL);
    printf("%sblue\n", BKBLU);
    printf("%smagenta\n", BKMAG);
    printf("%scyan\n", BKCYN);
    printf("%swhite\n", BKWHT);
    return 0;
}

