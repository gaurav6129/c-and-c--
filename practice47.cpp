
#include<stdio.h>

int checkit(void);
void refunc(int);
long int count=0; //counts total favorable arrangements
int *a;
int n,K;

int main()
{int cases, tcases,i,result;
scanf("%d",&tcases);

 for(cases=0;cases<tcases;cases++) //taking each test case
{scanf("%d %d",&n,&K);
   for(i=0;i<n;i++)
   {*a=i;
    refunc(i+1);
   }
}
result=count % 30041975;
printf("%d",&result);
return 0;
}



/* refunc func tries to implement aloop such that while keeping the cannon in a row it first checks if the previous
   connons have not been kept in that column.....trying to get all the cases */


void refunc(int j)
{int i, k,chk=0,arrangement;
int flag=0;
for(k=0;k<n;k++)
{ for (i=0;i<j;i++)
  if( *(a+i)==k )
   flag++;
if(flag==0)
  {*(a+j)=k;
      if(j!=n-1)    //refunc is called only till the last row is not reached
      refunc(j+1);
      else  {arrangement=checkit();
            if(arrangement>=K)
            count++;
            };
   }
}


//check funcn checks if the given arrangement is favourable.

int checkit()
{int c,b ,cnt=0,i=0,j=0;
    for(i=0;i<n;i++)
     {if(*(a+i)!=0 && *(a+i)!=(n-1))
       {for(j=0;j<n;j++)
         {if(*(a+j)== *(a+i) - 1)
          if(j>i) c=0;
           else c=1;
         }
        for(j=0;j<n;j++)
         {if(*(a+j)== *(a+i) + 1)
          if(j>i) b=0;
           else b=1;
         }
       }
       if(c==b)
        cnt++;
       }
return (cnt);
}


