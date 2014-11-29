#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string var1;
	cin >> var1;
	string var2;
	cin >> var2;
	if(var1.length()>=var2.length()){
		cout << var1;
	}else{
		cout << var2;
	}
}