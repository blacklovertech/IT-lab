#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void main()
{
    pid_t pid=0;
    int status;
    pid=fork();
    if(pid==0) 
    {
        printf("I'm a Child");
        execl("/bin/ls","ls","-1","/home/",(char*)0);
        perror("\nInexec();");
    }
    if(pid>0) 
    {
        printf("\nI'm Parent,and the Child is %d\n",pid);
        pid=wait(&status);
        printf("\nEnd of Process%d:",pid);
        if(WIFEXITED(status)) 
        {
            printf("\nThe Process ended with exit(%) \n",WIFEXITED(status));
        }
        if(WIFSIGNALED(status))
        {
            printf("\nThe Process ended with kill-%d\n",WTERMSIG(status));
        }
    }
    if(pid<0)
    {
        perror("in fork();");
    }
    exit(0);
} 

{ 
output
I'm Parent,and the Child is 13445cg
objc
rexx
teste
webmaster
End of Process13445:
The Process ended with exit(%) 
}