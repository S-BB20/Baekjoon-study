#include<iostream>
#include<string>
#include<algorithm> //sort()

using namespace std;

int main()
{
	string s;

	cin >> s;

	sort(s.begin(), s.end(), greater<int>());
	//sort(start,end,compare)�� �̿��ϸ� ����ڰ� ���� �Լ�(compare)�� �������� ����
	//greater�� std::greater �̴�. 

	std::cout << s;
}
