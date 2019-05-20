// MultiSet manipulations

#include<set>
#include<iostream>

using namespace std;

int main()
{
	multiset<string> name={"check"};
	
	for(auto elem:name)
	 cout<<elem<<endl;
	
	name = {"soumik","hello","soumik"};
	
	for(auto elem:name)
	 cout<<elem<<endl;
 
   name.insert("aa");
   name.insert("aaa"); 
   
   	for(auto elem:name)
	 cout<<elem<<endl;  
	
	return 0;
}


