#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/type.h>
#include<sys/wait.h>
void main()
{
oid_tpid=0;
int status;
pid=fork();
if(pid==0)
{
printf("I'm a Child");
execl("/bin/ls","ls","-1","/home/ubuntu/",(char*)0);
perror("Inexec();");
}
if(pid>0)
{
printf("I'm Parent,and the Child is %d\n",pid);
pid=wait(&status);
printf("End of Process%d:",pid);
if(WIFEXITED(status))
{
printf("
}
}