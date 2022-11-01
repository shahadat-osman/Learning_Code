#include<iostream>
using namespace std;
int insertZ(int arr[], int N, int pos, int item)
{
    int i;
    N++;
    for(i=N-1; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = item;
    return N;
}
int deleteZ(int arr[], int N, int pos)
{
    int i;
    //N++;
    for(i= pos; i<N-1; i++)
    {
        arr[i]=arr[i+1];
    }
    //arr[N-1];
    N=N-1;
    return N;
}
int main()
{
    int ar[100]={0}, i;
    int arsize;
    cin>>arsize;
    for(int i=0; i<arsize; i++)
        cin>>ar[i];
    arsize=insertZ(ar,arsize, 2,55);
    for(i=0; i<arsize; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    arsize=deleteZ(ar, arsize, 3);
    for(i=0; i<arsize; i++)
        cout<<ar[i]<<" ";
                                                                                                                            //arrsize=deletetion(arr,arrsize,3);
    return 0;
}
