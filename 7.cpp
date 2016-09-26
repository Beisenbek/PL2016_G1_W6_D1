/*
Задача №3074. Числа Фибоначчи
*/

#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;
	
	int prev1 = 0;
	int prev2 = 1;
	int k = 1;
	int current = 1;


	if(n == 0) current = 0; 

	while(++k<=n){
		current = prev1 + prev2;
		prev1 = prev2;
		prev2 = current;
	}

	cout << current;

	return 0;
}

/*
    1 2 c
0 1 2 3 4 5 6 
0 1 1 2 3 5 8 .. f(n)=f(n-1)+f(n-2)
*/
