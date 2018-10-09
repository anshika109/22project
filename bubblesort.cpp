#include<iostream>
using namespace std;
int main(){
	int ar[100],i,n,temp,j,count,ele,mid,first=0,last,flag=0;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n-1;i++){
		count=0;
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				count++;
			}
			
		}
		if(count==0)
		    break;
	}
	cout<<"Number of passes is" <<i<<endl;
//cout<<"count is:"<<count<<endl;
	cout<<"enter the element to b searched";
	cin>>ele;
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last){ 
		if(ele>ar[mid]){
		first=mid+1;
		}
		else if(ele==ar[mid]){
		cout<<"search is successful"<<endl;
		break;}
	    else {
	    last=mid-1;
		}
	    mid=(first+last)/2;
	
}  
   if(first>last){
   	cout<<"not found"<<endl;
   }

	
	return 0;
}
