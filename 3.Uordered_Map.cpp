// Unordered Map manipulations

#include<unordered_map>
#include<iostream>

using namespace std;

int main()
{
	unordered_map<int,string> name;
	
	name={{5,"david"},{0,"check"},{1,"soumik"},{0,"check"},{10,"roger"},{0,"check"}};
	
	for (auto elem:name)
	 {
	 	cout<<elem.first<<" ";
	 	cout<<elem.second<<endl;
	 }
	  	
	return 0;
}


