#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char* getDigitsFromString(char* comm){
    char* buff = malloc(1000);
    char* p = comm;
    int i=0;
    while(*p){
        if( isdigit(*p)){
            buff[i] = *p;
        }

    }
    return  buff;

}



int main(int arc, char** argv){
    
    int pid;
    printf("Enter pid to examine: ");
    scanf("%d",&pid);
    //sscanf(argv[1],"%d",&pid);
    printf("Pid: %d\n",pid);

    char filename[1000];
    sprintf(filename, "/proc/%d/sched",pid);
    FILE *f = fopen(filename,"r");

    char filteredstr[1000];
    int filteredNum;
    char comm[1000];
    char state;
    int ppid;
    int i=0;
    char *p = comm; 
    while(fgets(comm,100,f)){
        char* newFilteredStr = getDigitsFromString(comm);
        printf("%d\n",filteredNum); 

    }
    

       
    fclose(f);



    
    return 0;

}
