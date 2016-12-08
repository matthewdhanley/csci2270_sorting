#include <iostream>
#include <vector>

using namespace std;

void selection(vector<int> arr){
	for(int i = 0; i<arr.size(); i++){
		int indexOfMin = i;
		for(int j = i; j < arr.size(); j++){
			if(arr[indexOfMin]>arr[j]){
				indexOfMin = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[indexOfMin];
		arr[indexOfMin] = tmp;
		for(int k=0; k<arr.size(); k++){
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
	cout<<endl;
	selection(myArr);
	return 0;
}
