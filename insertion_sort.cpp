#include <iostream>
#include <vector>
#include <istream>

using namespace std;

void insertion_sort (vector <int> arr){
	 	int j, temp,length;
		length = arr.size();
	for (int i = 0; i < length; i++){
		j = i;
		
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
		}
		cout<<"After iteration "<<i<<":"<<endl;
			for(int k = 0; k < length; k++){
				cout<<arr[k]<<" ";
			}
			cout<<endl;
	}
}


int main(){
	cout<<"INPUT 999 TO END LIST"<<endl<<endl;
	vector <int> myArr;
	int x = 0;
	while(x != 999){
		cout<<"input number:"<<endl;
		cin>>x;
		if(x != 999){
			myArr.push_back(x);
		}
	}
	cout<<"original array:"<<endl;
	for(int k=0; k<myArr.size(); k++){
					cout<<myArr[k]<<" ";
	}
	cout<<endl<<endl;
	insertion_sort(myArr);
	return 0;
}