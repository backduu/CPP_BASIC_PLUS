#include <iostream>						
using namespace std;

bool setTime(double time, int minute);
int main()								
{			
	double time;
	int minute;
	cout << "�ð� ���� �Է��Ͻÿ�.";
	cin >> time;
	cout << "�� ���� �Է��Ͻÿ�.";
	cin >> minute;

	bool flag = setTime(time, minute);
	if (flag) cout << "\nset time is good";
	else cout << "\nbad!!";
	return 0;							
}					

bool setTime(double time, int minute) {
	cout << time << " : " << minute;

	return true;
}

