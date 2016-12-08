#include <iostream>
#include <vector>

using namespace std;

void bubble(vector<int> arr){
	for(int i=0; i<arr.size();i++){
		for(int j=0;j<arr.size()-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j+1];
				arr[j+1] = arr[j];
				arr[j]=tmp;
				for(int k=0; k<arr.size(); k++){
					cout<<arr[k]<<" ";
				}
				cout<<endl;
			}
		}
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
	for(int k=0; k<myArr.size(); k++){
					cout<<myArr[k]<<" ";
	}
	cout<<endl;
	bubble(myArr);
	return 0;
}
