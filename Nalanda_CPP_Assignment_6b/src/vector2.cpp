
#include "wordset.h"	 

        
int main(int argc,char* argv[])
{
	Wordset v1;
	string s;

 	vector <string> vlist;
	//cout <<"You have entered " << argc<<" arguments:" <<"\n";      
	for (int i = 1; i < argc; ++i)
	{
	 v1.addmember(argv[i]);

 	//vlist.push_back(argv[i]);
	//cout << argv[i] <<"\n";
 	}
	v1.displaylist();
	cout<<"Enter the member you want to Delete"<<endl;
	cin>>s;
	//cout<<"\nempty the vector vlist"<<endl;
	vector<string>::iterator it;      
	it = vlist.begin(); 
		 	
	/*if (vlist.empty())
    		{
        	cout << "True";
    		}
    		else {
        	cout << "False";
    		}*/
	v1.displaylist();


}
