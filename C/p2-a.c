#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    int p1,p2;
    p1=fork();
    if(p1==-1) {
        printf("error");
    } else {
        printf("\nPARENT IS %d,child is %d",getppid());
        p2=fork();
           printf("\nThe Parent is %d,child is %d\n",getppid(),getppid());
        return(0);
    }
}