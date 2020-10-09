#include<iostream>
using namespace std;

int main()
{
	
	int freq[50];
	int ip_array[50],n;
	
	cout<<"Enter size"<<endl;
	cin>>n;
	
	int max = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>ip_array[i];
		if(ip_array[i]>max)
		{
			max = ip_array[i];
		}
	}
	
	cout<<max<<endl;
	for(int i=0;i<=max;i++)
	{
		freq[i]=0;
	}
	for(int i=0;i<=max;i++)
	{
		freq[ip_array[i]]++;
	}
	for(int i=0;i<=max;i++)
	{
		if(freq[i]>0)
		{
			cout<<i<<" occures "<<freq[i]<<" times"<<endl;
		}
	
	}
	
	return 0;
}
