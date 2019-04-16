#include<conio.h>
#include<stdio.h> 
#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
 int i,j=0,n,v;
 int m=0,l,t,t1;
 int k;
 int sum=0;
 int o;
 int elem[20];
 int head;   
 int max;  
 int a[7]; 
 int b[2]; 
 int min=0;  
 system("cls");
		cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t\t#########################################"<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t    ******* ****** ******* *      *  "<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t    *       *      *     * **     *  "<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t    ******* *      ******* *  *   *  "<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t          * *      *     * *    * *  "<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t    ******* ****** *     * *      *  "<<endl;Sleep(1000);
		cout<<"\t\t\t\t\t\t#########################################"<<endl;Sleep(1000);
 
 cout<<("\t\t\t\t\t\t Enter number of location\t");
 cin>>n;
 cout<<("\t\t\t\t\t\t Enter position of head\t");
 cin>>head;
 cout<<("\t\t\t\t\t\t Enter elements of disk queue ")<<endl;
 for(i=0;i<n;i++)
 {
 	cout<<("\t\t\t\t\t\t\t\t\t");
 cin>>elem[i];
 }
 for(l=0;l<n;l++)
     {
     	if(elem[l]<head)
     	  {
     	  	b[m]=elem[l];
     	  	m++;
		   }
		   
	 }
 for(i=0;i<n;i++)
     {
     	if(elem[i]>head)
     	  {
     	  	a[j]=elem[i];
		   }
		   j++;
	 }
 for(i=1;i<=1;i++)
    {
    	for(j=1;j<=1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;
			}
		}
	 } 
 for(i=1;i<=6;i++)
    {
    	for(j=1;j<=6;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			t1=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t1;
			}
		}
	 } 
    
		    cout<<("\n\t\t\t\t\t\t Enter the value of max ");
		    cin>>max;
		    sum=sum+(max-1)-head+(max-1-b[0]);
		    cout<<"\t\t\t\t\t\t";
		    cout<<head<<"---->";
		    for(i=1;i<7;i++)
	  			{
	    			cout<<a[i]<<"---->";
		        }
		        cout<<max-1<<"---->";
		        for(i=1;i>=0;i--)
		        cout<<b[i]<<"---->";
		    printf("\n\t\t\t\t\t\t Movement of total cylinders %d",sum);
		
	
}

