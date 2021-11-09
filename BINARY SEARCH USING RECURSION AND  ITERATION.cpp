#include<stdio.h>
#include<stdlib.h>
int IterBinsearch(int a[],int );
int RecurBinsearch(int a[],int,int,int );
int main()
{int a[100],i,n,j,tem=0;
printf("Enter no :");
	scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}

for(i=0;i<=n-1;i++)
{for(j=0;j<n-i-1;j++)
{

if(a[j]>a[j+1])
{
tem=a[j];
a[j]=a[j+1];
a[j+1]=tem;

}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
while(1){
int b,m,o,p,u;
printf("\nEnter \n1.For Iterative Binary Search\n2.For Recursive Binary search\n3.For Exit:");
scanf("%d",&b);
switch(b){
case 1:o=IterBinsearch(a,n);
       if(o>=0)
        printf("FOUNDED at %d",o);
        else if(o==-1)
        printf("Not FOUND");
       break;
case 2:printf("Enter Element for search:");
	   scanf("%d",&m);
	   p=0;
       u=RecurBinsearch(a,n-1,p,m);
       if(u>=0)
        printf("FOUNDED at %d\n",u);
       else if(u==-1)
       printf("Not FOUND\n");
       
       break;
case 3:exit(1);
}
}
}
int IterBinsearch(int a[],int n)
{
	int mid,beg,end,k;
	printf("\nEnter Element for search:");
	scanf("%d",&k);
	beg=0;
	end=n-1;
	while(beg<=end){
	mid=(beg+end)/2;
	if(a[mid]==k){
	
	return mid;
}
	else{
		if(a[mid]>k)
		end=mid-1;
		else if(a[mid]<k)
		beg=mid+1;
		}
		}
	return -1;
		}
int RecurBinsearch(int a[],int end,int beg,int m )
{int mid;
if(beg<=end){
mid=(beg+end)/2;
if(a[mid]==m)
return mid;
else if(a[mid]<m)
return RecurBinsearch( a,end,mid+1, m );
else if(a[mid]>m)
return RecurBinsearch( a,mid-1,beg, m );
}
else
return -1;
	
}

		
		
		
		
		
	
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	


