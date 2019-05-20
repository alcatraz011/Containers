// Vector manipulations

#include<vector>
#include<iostream>

//using namespace std;

int main()
{
	std::vector<int> num;
	
	for (int i=0;i<10;i++)
	num.push_back(i);
	
	
	for (int i=0;i<num.size();i++)
	 std::cout<<num[i]<<std::endl;
	 
	num.pop_back();
	
	std::cout<<"Last element popped!!!"<<std::endl;
	
	for (int i=0;i<num.size();i++)
	 std::cout<<num.at(i)<<std::endl; 
	
	return 0;
}


