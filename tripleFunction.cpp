#include <iostream>
using namespace std;
int tripleByValue(int count){
	return count *= 3;
}
void tripleByReference(int & count){
	count *= 3;
}
int main(){
	int count=5;
	cout<<"Count before calling tripleByValue() is: "<<count<<endl;
	cout<<"Count returned from tripleByValue() is: "<<tripleByValue(count)<<endl;
	cout<<"Count after calling tripleByValue() is: "<<count<<endl;
	cout<<"Count before calling tripleByReference() is: "<<count<<endl;
	tripleByReference(count);
	cout<<"Count after calling tripleByReference() is: "<<count<<endl;
	return 0;
}
