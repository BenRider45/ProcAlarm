#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int arc, char** argv){
    
    int pid;
    printf("Enter pid to examine: ");
    scanf("%d",&pid);
    //sscanf(argv[1],"%d",&pid);
    printf("Pid: %d\n",pid);

    char filename[1000];
    sprintf(filename, "/proc/%d/sched",pid);
    FILE *f = fopen(filename,"r");

    char filteredTitle[1000];
    int filteredNum;
    char comm[1000];
    char state;
    int ppid;
    int i=0;
    char *p = comm; 
    while(fgets(comm,100,f)){
        while(*p){
            printf("%s",p);
            if(isdigit(*p) || ( ( (*p) == '.')&&(isdigit(*(p+1))))){
                printf("!",*p);
            }
            p++;
        }
        printf("\n");

        p = comm ;
        //sscanf(comm,"%s:%*[1234567890]",filteredTitle,&filteredNum);
       // printf("%d, %s:%d\n",i,filteredTitle,filteredNum);
     //   i++;
    }
    

       
    fclose(f);



    
    return 0;

}
