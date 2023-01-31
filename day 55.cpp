#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
void swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}
void SplSort(int *vec1,int n)
{
for(int i = 0 ; i < n-1 ; i++)
{
for(int k = 0 ; k<n-1-i ; k++)
{
if(vec1[k] < vec1[k+1])
{
swap(&vec1[k],&vec1[k+1]);
}
}
}
int idx=0;
while(vec1[idx] >=0)
{
idx++;
}
int start = idx,end = n-1;
while(start<end)
{
swap(&vec1[start],&vec1[end]);
start++;end--;
}
}
int MaxScalar(int *vec1,int *vec2,int n)
{
int max,sop=0,id1,id2;
for(int i = 0 ; i<n ; i++)
{
max = INT_MIN;
for(int j = i ; j<n ; j++)
{
if((vec1[i]*vec2[j]) > max)
{
max = vec1[i]*vec2[j];
id1 = i; id2 = j;
}
}
sop = sop + max;
swap(&vec1[i],&vec1[id1]);
swap(&vec2[i],&vec2[id2]);
}
return sop;
}
int main()
{
int n; cin>>n;
int vec1[n];
for(int i = 0 ; i<n ; i++)
{
cin>>vec1[i];
}
int vec2[n];
for(int i = 0 ; i<n ; i++)
{
cin>>vec2[i];
}
SplSort(vec1,n);
cout<<MaxScalar(vec1,vec2,n);
return 0;
}
