// Unordered MultiSet manipulations

#include<unordered_set>
#include<iostream>

using namespace std;

int main()
{
	unordered_multiset<string> name;
	
	name= {"hello","world","world"};
	
	for(auto elem:name)
	 cout<<elem<<endl; 	

	 
	name.insert("India");
	
	for(auto elem:name)
	 cout<<elem<<endl; 
	  	
	return 0;
}


