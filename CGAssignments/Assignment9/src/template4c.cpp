#include <template.h>
#include <string>
#include <cstring>
template <typename T> class MyArrayClass
{
	private:
		T* arr;
		int count;
	public:
		MyArrayClass(){};
		void PopulateData(T *arr, int count);
};
template <typename T>void MyArrayClass<T>::PopulateData(T *arr, int count)
{
    for (int i = 0; i < count; i++)
	{
    cout << *arr<<" " ;
	++arr;
	}
	cout << endl;
}

int main()
{
	int numarr[]={10,20,30,40,50};
	char chrarr[]="Template";
	float fltarr[]={2.5,3.6,2.6,2};
	cout<<"Number Array: ";
	MyArrayClass<int> a;
	a.PopulateData(numarr,5);
	cout<<"Character Array: ";
	MyArrayClass<char> b;
	b.PopulateData(chrarr,strlen(chrarr));
	cout<<"Float Array: ";
	MyArrayClass<float> c;
	c.PopulateData(fltarr,4);
	return 0;
}
