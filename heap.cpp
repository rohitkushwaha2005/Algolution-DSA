#include<iostream>
using namespace std;
int main(){
	int n,value;
	
	int A[]={4,18,17,10,19,20,14,8,3,12};
	
	n=sizeof(A)/sizeof(A[0]);
	 cout<<"Enter value : ";
	 cin>>value;
	
	n=n+1;
	A[n] = value;
	int i=n;
	
	while(i>0){
		int parent = (i-1)/2;
		if(A[parent]<A[i]){
			swap(A[i],A[parent]);
			i=parent;
		}
		else
	break;
	}
	
	for(i=0;i<n;i++){
		cout<<A[i]<<",";
	}
}
