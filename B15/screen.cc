#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int width;
	cin >> width;
	int N, K;
	cin >> N >> K;
	int A[N-1];
	int B[N-1];
	int C[N-1][2];
	for (int i = 0; i < N; ++i){
		cin >> A[i] >> B[i];
		int C[i][2]= {A[i], B[i]};
	}


}