#include <iostream>
using namespace std;


int main()
{
	int num1, num2;
	char op;
	
	cout << "Nomor pertama: ";
	cin >> num1;
	cout << "Tanda kerja: ";
	cin >> op;
	cout << "Nomor kedua: ";
	cin >> num2;
	int result;
	if(op == '+'){
		result = num1 + num2;
	} else if(op == '-'){
		result = num1 - num2;
	} else if(op == '/'){
		result = num1 / num2;
	} else if(op == '*'){
		result = num1 * num2;
	} else {
		cout << "Tanda kerja salah! ";
	}
	cout << result << endl;
	
	system("pause");
	return 0;
}

