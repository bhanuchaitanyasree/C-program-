#include <stdio.h>
int main()
{
int a[10],i,n;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the elements:");
for (i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n; i++)
{
printf("%d\t", a[i]);
}
return 0;
}
