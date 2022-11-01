#include<iostream>
using namespace std ;

int InsertionA(int num[],int n , int x,int pos)
{ int i;
for (i=n-1;i>=pos;i--)
{
num[i+1]=num[i];
}
num[pos]=x;

return n+1;
}

int deletionA(int replica[],int n,int x)
{

int i,j;
int flag=0;


for (i=0;i<n;i++)
{
if (x==replica[i]){
flag=1;

for(j=i;j<n;j++)
{
replica[j]=replica[j+1];
}
break;
}
}
if(flag==1)
return n-1;
else
return -1;
}

int linearsearch(int num[],int n,int x){

int i;
for (i=0;i<n;i++)

if(num[i]==x)
return i;
return -1;
}

int binarySearch(int num[], int mini, int maxx, int x) {

if (mini<= maxx) {
int mid = (mini+ maxx)/2;
if (num[mid] == x)
return mid ;
if (num[mid] > x)
return binarySearch(num, mini, mid-1, x);
if (num[mid] < x)
return binarySearch(num, mid+1, maxx, x);
}
return -1;
}

void bubbleSort(int num[], int n)
{
int i, j;
int tem=0;
for (i = 0; i < n - 1; i++)



for (j = 0; j < n - i - 1; j++)
if (num[j] > num[j + 1])
{
tem=num[j];
num[j]=num[j+1];
num[j+1]=tem;
}

}
int main(){
int num[50]={0};
int x;
int pos;
int i;
int n ;
cout<< "Enter the size of array for Insertion:"<<endl;
cin>>n;
cout << "Enter the array elements:"<<endl;
for (i=0;i<n;i++)
{
cin>>num[i];
}

cout<<"Array record before insertion:"<<endl;
for (i=0;i<n;i++)
{
cout<<num[i]<<" "<<endl;
}

cout<<"Enter the element to be inserted :"<<endl;
cin>>x;
cout<<"Enter the position where you want insert the element"<<endl;
cin>>pos;

int size = InsertionA(num,n,x,pos);
cout<<"The record after insertion:"<<endl;
for(i=0;i<size;i++)
{
cout<<num[i]<<" "<<endl;
}


int replica[50];

int j;
int flag;
cout<<"Enter the size of the array for Deletion:"<<endl;
cin>>n;
cout<<"Enter the arrays:"<<" ";
for (i=0;i<n;i++)
{
cin>>replica[i];
}
cout<<"The arrays before deletion:"<<" "<<endl;
for (i=0;i<n;i++)

{
cout<<replica[i]<<" "<<endl;}
cout<< "Enter the element that you want to delete:"<<endl;
cin>>x;

size=deletionA(replica,n,x);

if(size == -1){
cout<<"not found";
}
else{

cout<<"The array after deletion:";
for (i=0;i<size;i++)
{
cout<<replica[i]<<" "<<endl;
}

}

int index=-1;
cout<<"Enter the array size for Linear Search:"<<" "<<endl;
cin>>n;
cout<<"Enter the arrays:"<<" "<<endl;
for(i=0;i<n;i++)
{
cin>>num[i];
}

cout <<"Enter the element you want to search :"<<" "<<endl;
cin>>x;

index=linearsearch(num,n,x);
if(index==-1)
{ cout<<"The element is not found "<<endl;}
else
{cout<<"The element is found at index:"<<index<<endl;}

cout<<"Enter the array size Binary Search:"<<" "<<endl;
cin>>n;
cout<<"Enter the arrays:"<<" "<<endl;
for(i=0;i<n;i++)
{
cin>>num[i];
}
cout << "Enter the number to search:";
cin >> x;

index = binarySearch (num,0,n-1,x);
if(index == -1){
cout<< x <<" is not present in the array";
}else{
cout<< x<<" is present at index "<< index <<" in the array"<<endl;
}



{
cout<<"Enter the size of array for Bubble Sort:"<<endl;
cin>>n;
cout<<"Enter the arrays:"<<endl;
for (i=0;i<n;i++)
{
cin>>num[i];
}

bubbleSort(num,n);
cout << "Sorted array: \n"<<endl;

for (i = 0; i <n ; i++)
cout << num[i] << " ";}

return 0;
}