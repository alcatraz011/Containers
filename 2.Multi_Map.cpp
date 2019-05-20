// MultiMap manipulations

#include<map>
#include<iostream>
#include<string>

void deleteitem();
void isMapEmpty();
void updateMap(int,int);


using namespace std;

multimap<int,string> name;

int main()
{
	
	
	name = {{1,"soumik"},{5,"david"}, {10,"John"},{15,"Mike"},{20,"Danish"}};  // Duplicate values accepted
	
//	deleteitem();
//	deleteitem();

    updateMap(5,1);
    updateMap(20,0);
    updateMap(15,5);
    
	isMapEmpty();
	
		for(auto elem:name)
	{
		cout<<elem.first<<" ";
		cout<<elem.second<<endl;
	}	
	 	
	return 0;
}


void deleteitem()
{
	multimap<int,string>::iterator it,itcopy;
	
	it=name.begin();
	itcopy=it;

	cout<<"Item to delete "<<it->first<<" "<<it->second<<" \n\n";		
	name.erase(it);
	
}

void isMapEmpty()
{
  	if (!name.empty())
	 cout<<"Non-Empty\n";
	else
	 cout<<"Empty\n";	 
}

void updateMap(int key, int keynew)
{
	multimap<int,string>::iterator it,itcopy;
	
	for(it=name.begin();it!=name.end();)
	{
		itcopy=it;
		if(it->first==key)
		{
//		 cout<<it->first<<" ";
         string value =it->second;		
		 name.erase(it);
		 name.insert({keynew,value});
	    }
		
		++it;
     
	} 	
}
