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


[
PARENT IS 58704,child is 0
The Parent is 58704,child is 58704
PARENT IS 58704,child is 0
The Parent is 48658,child is 48658
PARENT IS 48658,child is 0
The Parent is 48658,child is 48658
PARENT IS 48658,child is 0
The Parent is 48659,child is 48659

]