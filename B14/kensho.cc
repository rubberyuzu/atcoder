#include <iostream>
using namespace std;

int main(){
	int candies, children;
	cin >> candies >> children;
	if(candies%children == 0){
		cout << 0 << endl;
	}else{
		cout << children-candies%children << endl;
	}
}