#include <Main.h>


class Words{
private:
	char *words[5];
	int count;
public:
	Words()
	{
		count=0;
	}
	~Words()
	{
		for(int i=0;i<count;i++)
		delete words[i];
	}
	int getCount()
	{
		return count;
	};
//	char *getMaxWord(int pos)
//	{
//		return words[pos];
//	}
	void setWords(char *line)
	{
		char *tokens=strtok(line," ");
	while(tokens!=NULL)
		{
			if(count==5)
				break;
			words[count]=new char[strlen(tokens)+1];
			strcpy(words[count],tokens);
			tokens=strtok(NULL," ");
			count+=1;
		}
	}

	void dispWords()
	{
		for(int i=0;i<count;i++)
			cout<<words[i]<<" ";
		cout<<endl;
	}

	bool SNReplace(char *key, char*repStr)
	{
		for(int i=0;i<count;i++)
		{
			if(strcmp(words[i],key)==0)
			{
				words[i]=new char[strlen(repStr)+1];
				strcpy(words[i],repStr);
				return true;
			}
		}
		return false;
	}

//	int getMaxWords()
//	{
//		int max=strlen(words[0]);
//		int pos =0;
//		for(int i=1;i<count;i++)
//		{
//			if(max<strlen(words[i]))
//			{
//				max=strlen(words[i]);
//				pos=i;
//				cout<<"POS: "<<pos<<endl;
//			}
//		}
//		return pos;
//	}
};

int main()
{
	Words ws;
	string line;

	getline(cin,line);
	ws.setWords((char *)line.c_str());
	ws.dispWords();

//	cout<<"Max of all words are: "<<ws.getMaxWord(ws.getMaxWords())<<endl;
	cout<<"\nEnter the word to be search: "<<endl;
	string key;
	cin>>key;
	cout<<"\nEnter the word to be replace with: "<<endl;
	string repStr;
	cin>>repStr;
	if(ws.SNReplace((char *)key.c_str(),(char*)repStr.c_str())==true)
		{
			cout<<"After replacing the word: "<<endl;
			ws.dispWords();
		}
	return 0;
}
