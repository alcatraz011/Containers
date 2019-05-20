// Unordered set manipulations

#include<unordered_set>
#include<iostream>

using namespace std;

int main()
{
	unordered_set<int> num;
	
	num= {1,2,3,4};
	
	for(auto elem:num)
	 cout<<elem<<endl; 	
	
/*	num= {5,4,9,8};
	
	for(auto elem:num)
	 cout<<elem<<endl; */
	 
	num.insert(10);
	
	for(auto elem:num)
	 cout<<elem<<endl; 
	  	
	return 0;
}


