#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char l;
	cin >> l ; 
	if (isalpha(l))
	{
		if (l == tolower(l))
			cout << 0;

		else
			cout << 1;
	}
	else
		cout << -1;

	return 0;
}
