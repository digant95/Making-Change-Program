#include<iostream>
using namespace std;
int count=0,change[10],k=0,sn=0,sn1=0,temp=0,diff,sa[10],s1=0,s2,a1[10],k2=0;
int i,j,n,n1,a[10],sum=0,sel1,sel2,nn=0,nn1=100,nn2=0;
void findsmall(int a[],int n1);
void makech(int a[],int n1,int sum)
{

	for(i=0; a[i]!='\0';i++)
		{count++;}
	//cout<<endl<<"count"<<count<<endl;
	for(i=0; i<count; i++)
	{
		if(n1==a[i])
			{change[k++]=a[i];}
		sel1=a[i];
		if(n1%sel1==0)
	      {		//sel1=a[i];
			nn=n1/sel1;
			if(nn1>=nn)
			{
				nn1=nn;
			}
	       }
	}
	sel1=n1/nn1;
	findsmall(a,n1);
	//cout<<"Small"<<sn;
	s1=sn;
	a1[k2++]=s1;
	//cout<<endl<<"Change "<<k2<<" "<<s1<<endl;
	while(s1<n1)
		{ diff=n1-s1;
			sn=0;
			findsmall(a,diff);
			a1[k2++]=sn;
		//cout<<endl<<"Change "<<k2<<" "<<sn<<endl;
	s1=s1+sn;
		}
	//cout<<"\n"<<"Smaller:"<<s1<<"\n";
	//diff=n1-s1;
	//findsmall(a,diff);
	//s2=sn;
	//a1[k2++]=s2;


}
void findsmall(int a[],int n1)
{
	//cout<<"Count in FS:"<<count<<endl;
	for(i=0; i<count; i++)
	{

//sn=temp;
			if(a[i]<=n1)
			{
			sn1=a[i];
			//temp=sn1;
			if(sn1>=sn)
				{sn=sn1;}
			}
			//temp=sn1;
	}
//cout<<"Small in FS:"<<sn;
}
int main()
{

	cout<<"Enter no of coins in set:"; cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
       nn1=a[i];
		sum=sum+a[i];
		if(nn2<=nn1)
		{
			nn2=nn1;
		}
	}
	nn1=nn2;
	cout<<"Enter the the amount for which you want change:";
	cin>>n1;
	makech(a,n1,sum);
	//cout<<endl<<k2<<endl;
	cout<<"Change:";
if(nn1<k2)
	{
		for(i=0; i<nn1; i++)
		{  cout<<" "<<sel1;	}
	}
	else
	for(i=0; i<k2; i++)
	{
		cout<<" "<<a1[i];
		}
return 0;
}
