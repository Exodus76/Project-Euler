#include <iostream>
using namespace std;
int main(){
	int i,cout,t1 = 0, t2 = 1,even=0, var;
	cin << var ;
	for(i=0;i<=var;i++){
		cout = t1 + t2; //1 2
		t1 = t2;
		t2 = cout;
		if(cout%2 == 0){
			even = even + cout;
			cout << even;
			continue;
		}
	}
		cout << even;
}