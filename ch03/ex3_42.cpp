#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int int_arr[10];

	for (int* i = begin(int_arr); i != end(int_arr); ++i)
		*i = ivec[i - begin(int_arr)];

	/*{
		int *pi = int_arr;
		for (int &i : ivec) { *pi = i; ++pi; }
	}*/

	for (auto i : int_arr) cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}
