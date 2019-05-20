// Array(class) manipulations

#include<array>
#include<iostream>

using namespace std;

int main()
{
	array<string,3> names;
	
	names={"hello","soumik","now"};
	cout<<names[0]<<endl;
	
	names={"now"};
	cout<<names[0]<<endl;
	
	names[2] = "hello";
	cout<<names[2]<<endl;
	
	
	for(int i=0; i<names.size(); i++)
	 cout<<names[i]<<" ";
	
	return 0;
}


