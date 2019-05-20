// List manipulations

#include<list>
#include<iostream>

using namespace std;

int main()
{
	list<int> num;
	
	for (int i=0; i<5; i++)
	 num.push_back(i);
	 
//	cout<<num.size();
	
	for(auto elem:num)
	 cout<<elem<<endl; 
	
	return 0;
}


