#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
	int piv = arr[start];
	int pos = start+1;
	for(int j = start+1;j <= end;j++)
	{
	    if(arr[j] < piv)
	  {
		swap(arr[pos],arr[j]);
		pos = pos +1;
	  }
	  swap(arr[start],arr[pos-1]);
    }
	return pos-1;
}
void quickSort(int A[],int start,int end)
{
	if(start<end)
	{
		int pos=partition(A,start,end);
		quickSort(A,start,pos-1);
		quickSort(A,pos+1,end);
	}
}

int checkMax(int b []){

    /*for (){
        check if pivot max
        return 1; 
    } */

return 0;
}

int main()
{
	int arr[4] = {8,1,6,4};
	quickSort(arr,0,3);
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}