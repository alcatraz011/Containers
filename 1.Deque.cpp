// Deque manipulations

#include<deque>
#include<iostream>

using namespace std;

int main()
{
	deque<string> names;
	
	names.push_back("hello");
	cout<<names[0]<<endl;
	
	names.push_front("soumik");
	cout<<names[0]<<endl;
	
	cout<<names.size();
	
	return 0;
}


