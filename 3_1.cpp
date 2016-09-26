#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	int i = n;

	while(n%--i!=0){}

	cout << i;


	return 0;
}