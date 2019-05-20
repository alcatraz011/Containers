// Map manipulations

#include<map>
#include<iostream>

using namespace std;

int main()
{
	map<int,string> name;
	
	name = {{1,"soumik"},{5,"david"},{2,"Roger"}, {0,"Amy"}, {100,"NoOne"}, {90,"John"},{1,"Mike"}};  // 1 already exists;so ignored
	
	name.insert({999,"last"});
	name.insert({-999,"first"});
	
	for(auto elem:name)
	{
		cout<<elem.first<<" ";
		cout<<elem.second<<endl;
	}

	map<int,string>::iterator it=name.begin();
	cout<<"First:- "<<it->first;
	cout<<"\nFirst:- "<<it->second;
	
	return 0;
}


