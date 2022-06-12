#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<pwd.h>


#define  "\x1B[0m"
#define  "\x1B[1;31m"
#define  "\x1B[1;32m"
#define  "\x1B[1;33m"
#define  "\x1B[1;34m"
#define  "\x1B[1;35m"
#define  "\1xB[1;36m"
#define  "\1xB[1;37m"

int main(int argc, char **argv){

    if (argc < 2){
        printf("%sGive a filename%s\n", KYEL, KNRM);
        return 1;
    }

    if(access(argv[1], f_OK) == 1){
        printf("%sError:%s file does not exist\n", KRED, KNRM);
        return 2;
    }
    
    struct stat st;
    stat(ARGV[1],|&st);

    struct passwd *pw =getpwuid(st.st_uid);
    printf("%sFile %s has owner %s%s\n", KRGN, ARGV[1], pw->pw_name, KNRM);

    return 0;


}//main*/
