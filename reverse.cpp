//print reverse of an array
/*
#include<iostream>
using namespace std;
int main(){
	int i,n,arr[10];
	cout<<"enter number of an array"<<endl;
	cin>>n;
	cout<<"enter the value an array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"value of an array is:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl<<"after reversing"<<endl;

	for(i=n-1;i>=0;i--){
	cout<<arr[i]<<endl;
}
return 0;	
}

*/

#include<iostream>
using namespace std;
  int reverseArray(int arr[10],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}

}

int main(){
	int i,n,arr[10];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	reverseArray(arr,0,n-1);
	cout<<"after reversing"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<ends;
	}
	return 0;
	
}





















