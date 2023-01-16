#include<iostream>
using namespace std;

void printO(int N , int M){
	if(N > 0){
		for(int i = 0 ; i < N ; i++){
			if(M > 0){
				for(int x = 0 ; x < M ; x++){
					cout <<  "O";
				}
				cout << "\n";
			}
			else{
				cout << "Invalid input";
				break;
			}
			}
		}
	else{
		cout << "Invalid input";
	}
}