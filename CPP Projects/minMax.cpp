#include<iostream>
using namespace std;
void min_max(float f[],float &min,float &max)
{
int n;
cout<<"Size of float array?\n";
cin>>n;
cout<<"Enter the float array elements\n";
for(int i=0;i<n;i++)
{
cin>>f[i];
}
max=min=f[0];
for(int i=0;i<n;i++)
{
if(f[i]>max)
{
max=f[i];
}
if(f[i]<min)
{
min=f[i];
}
}
cout<<"Largest of float array is "<<max;
cout<<"\nSmallest of float array is "<<min;
}
void min_max(int a[],int &min,int &max)
{
int n;
cout<<"\nSize of integer array?\n";
cin>>n;
cout<<"Enter the integer array elements\n";
for(int i=0;i<n;i++)
cin>>a[i];
max=min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
cout<<"Largest of integer array is "<<max;
cout<<"\nSmallest of integer array is "<<min;
}
int main()
{
float fmini,fmaxi;
float f[25];
int a[25],imin,imax;
min_max(f,fmini,fmaxi);
min_max(a,imin,imax);
}