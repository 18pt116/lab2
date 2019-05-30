#include <iostream>
using namespace std;
template <typename A>
void selectSort(A *arr,int size)
{
	A tmp;
	for (int i=0; i<size; ++i) {
		int pos=i;
		tmp=arr[i];
		for(int k=i+1; k < size; ++k) {
			if (arr[k]< tmp) {
				pos=k;
				tmp=arr[k];
			}
		}
		arr[pos]=arr[i];
		arr[i]=tmp;
	}
	cout << "sorted array: ";
	for ( int i=0; i< size; ++i) {
		cout << arr[i]<< " ";
	}
}
int main()
{
	int size;
	cout << "enter size: ";
	cin>> size;

	double arr[size];
	for ( int i=0; i< size; ++i) {
		cin>>arr[i];
	}
	selectSort(arr, size);
	return 0;
}
