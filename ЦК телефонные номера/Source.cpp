#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string RefNum = "0123456789";
	string PhoneBook[5]{"8(996)0515695", "+79188093145", "8-918-809-31-45", "+79960515695", "8(918)8093145"};
	cout << "Ââåäèòå íîìåð â ôîðìàòå 8ÕÕÕÕÕÕÕÕÕÕ" << endl;
	string phone;
	cin >> phone;
	phone.erase(0, 1);
	for (int i = 0; i < 5; i++)
	{
		string d = PhoneBook[i];
		for (int j = 0; j < d.length(); j++)
		{
			if (RefNum.find(d[j]) == -1)
			{
				d.erase(j, 1);
			}
		}
		//d.erase(0, 1);
		PhoneBook[i] = d;
	}

	for (int i = 0; i < 5; i++)
	{
		if (PhoneBook[i].compare(1,10,phone)==0)
		{
			cout << PhoneBook[i] << " Yes" << endl;
		}
		else
		{
			cout << PhoneBook[i] << " No" << endl;
		}
	}	
}