// Set manipulations

#include<set>
#include<iostream>

using namespace std;

int main()
{
	set<int> nums;
	
	nums={5,1,2,7,0,-1};
	
	for (auto i:nums)
	 cout<<i<<" ";
	 
	cout<<endl;
	
	nums.insert(4);
	nums.insert(4);   //Duplicate entry will be discarded in set
	
	auto it2= nums.find(11);
	cout<<*it2<<endl;
	

	
	set<int>::iterator it;
	
	it=nums.find(-1);
	nums.erase(it);
	
	for (auto i:nums)
	 cout<<i<<" ";
	

    it=nums.find(-100);
	
	if(it==nums.end())
	 cout<<"\nNot found";
	 
//	cout<<"\nFirst element "<<*it; 
	
	return 0;
}


