#include <iostream>
#include <vector>

using namespace std;

void shell(vector<int> arr){
	int gap,i,j,tmp;
	for(gap = arr.size()/2; gap > 0; gap /=2){
		for(i = gap; i<arr.size(); i++){
			for(j=i-gap; j>=0 && arr[j]>arr[j+gap];j-=gap){
				tmp = arr[j];
				arr[j] = arr[j+gap];
				arr[j+gap] = tmp;
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
	cout<<endl<<"original array:"<<endl;
	for(int k=0; k<myArr.size(); k++){
					cout<<myArr[k]<<" ";
	}
	cout<<endl<<endl;
	shell(myArr);
	return 0;
}