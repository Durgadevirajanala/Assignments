#include "wordset.h"

int Wordset::addmember(string s){
	 //for (int i = 1; i < argc; ++i)
          //{
		int i;
          vlist.push_back(argv[i]);
          //cout << argv[i] <<"\n";
         //}
	return 0;
}
int Wordset :: deletemember(string s){
		
		
		if (find(vlist.begin(), vlist.end(),s) != vlist.end()) {

		cout << "Element found";
		vlist.pop_back();
		}

    

    		else {

       		cout << "Element not found";

   	 	}
		vlist.pop_back();
		//cout<<"Deleting Member "<endl;
    		for(string s :vlist)
    		cout<<s<<"  "<<endl;
		 return 0;
}
void Wordset :: displaylist(){
for (auto it = vlist.begin(); it != vlist.end(); ++it)
          cout <<' ' << *it;

}
