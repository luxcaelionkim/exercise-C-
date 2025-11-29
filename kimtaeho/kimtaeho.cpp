#include <iostream>
#include <string>
#include "MyVector.h"

using namespace std;

int n, m;

void solution()
{

}

void input()
{
	vector_int v;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int input_value;
		cin >> input_value;
		v.push(input_value);
	}
	cout << v.front() << " " << v.back();
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