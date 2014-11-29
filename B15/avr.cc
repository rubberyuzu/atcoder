#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	int nums[num];
	int i;
	for (i = 0; i < num; ++i){
		cin >> nums[i];
	}
	int sum =0;
	int bug = 0;
	for (i = 0; i < num; ++i){
		sum += nums[i];
		if(nums[i]!=0){
			bug ++;
		}
	}
	double avr = (double)sum/(double)bug;
	int avr_int = (int)sum/(int)bug;
	if(avr>avr_int){
		cout << avr_int+1;
	}else{
		cout << avr_int;
	}
}