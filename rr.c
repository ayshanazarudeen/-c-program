#include<stdio.h>
void main()
{
int s,i,tq,n,bt[10],f,tt[10],wt[10],rt[10],t,rem;
float wait=0,turn=0,awt=0,att=0;
f=0;
printf("enter no of processes\n");
scanf("%d",&n);
printf("enter burst times for all processes\n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
rt[i]=bt[i];
}

printf("enter time quantum\n");
scanf("%d",&tq);

rem=n;

for(t=0,i=0;rem!=0;)
{

if(rt[i]<=tq && rt[i]>0)
{
t+=rt[i];
rt[i]=0;
f=1;
}

else if(rt[i]>0)
{
rt[i]-=tq;
t+=tq;
}

if(rt[i]==0 && f==1)
{
rem--;
}

}

wt[0]=0;
for(i=0;i<n;i++)
{
wait+=wt[i];
wt[i+1]=wt[i]+bt[i];
tt[i]=wt[i]+bt[i];
turn+=tt[i];
}

printf("\nprocesess\tburst time\t waiting time\t turn around time\n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\t\t  %d\t\t\t%d\t\n",i,bt[i],wt[i],tt[i]);
}

awt=wait/n;
att=turn/n;

printf("\naverage turn around time=%f",att);
printf("\naverage  waiting time=%f",awt);
printf("\n GANTT CHART \n");
for(i=0;i<n;i++)
{
int z=0;
printf("%d",z);
}
for(i=0;i<n;i++)
{
s=s+bt[i];
printf("\t\t%d",s);
}
printf("\n");

for(i=0;i<n;i++)
{

printf("\t\tp%d",i+1);

}
printf("\n");
}

