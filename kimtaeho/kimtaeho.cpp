#include <iostream>
#include "MyVector.h"

using namespace std;

int n, m;

void solution()
{

}

void input()
{
	cin >> m;
	my_vector<int> v;
	for (int i = 0; i < m; i++)
	{
		int input_value;
		cin >> input_value;
		v.push(input_value);
	}
	cout << v[1] << " " << v.back();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	input();
	solution();

	return 0;
}