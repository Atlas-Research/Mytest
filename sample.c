#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<pwd.h>



#define KNPM "\x1B[0m" 
#define KRED "\x1B[1;31m" 
#define KGRN "\x1B[1;32m" 
#define KYEL "\x1B[1;33m" 
#define KBLU "\x1B[1;34m" 
#define KMAG "\x1B[1;35m" 
#define KCYN "\x1B[1;36m"
#define KWHT "\x1B[1;37m"

int main(int argc, char **argv){

    if (argc < 2){
        printf("%sPlease provide the name of the file%s\n", KMAG, KNPM);
        return 1;
    }

    if(access(argv[1], F_OK) == 1){
        printf("%sError:%s file does not exist\n", KRED, KNPM);
        return 2;
    }
    
    struct stat st;
    stat(argv[1], &st);

    struct passwd *pw =getpwuid(st.st_uid);
    printf("%sThe File %s is Owned By: %s%s\n", KRED, argv[1], pw->pw_name, KNPM);

    return 0;


}//main*/
