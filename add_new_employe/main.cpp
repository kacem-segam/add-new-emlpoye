#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct s_Employe
{
	string F_name;
	string L_name;
	string Id;
	string date_of_birth;
	float salary;


};

s_Employe read_struct()
{
	s_Employe emoloy;
	cout << "Enter First Name : ";
	getline(cin >> ws, emoloy.F_name);
	cout << "Enter Last Name : ";
	getline(cin >> ws, emoloy.L_name);
	cout << "Enter Id : ";
	getline(cin >> ws, emoloy.Id);
	cout << "Enter Date Of Birth (d/m/y): ";
	getline(cin >> ws, emoloy.date_of_birth);
	cout << "Enter Salary : ";
	cin >> emoloy.salary;
	return (emoloy);
}

void print_struct(s_Employe emloy)
{
	cout << "First Name   : " << emloy.F_name << endl;
	cout << "Last Name    : " << emloy.L_name << endl;
	cout << "Imploye's Id : " << emloy.Id << endl;
	cout << "Date Of Birth: " << emloy.date_of_birth << endl;
	cout << "Salary       : " << emloy.salary <<"$"<< endl;

}

void print_array_of_struct(vector <s_Employe> &arry)
{
	for (s_Employe &str : arry)
	{
		print_struct(str);
		cout << "\n\n";
	}
}



int main()
{
	vector <s_Employe> employs;
	s_Employe employe;

	char read_more = 'Y';
	while (read_more == 'Y' || read_more == 'y')
	{
		cout << "Pls Enter This Informations?\n";
		employe = read_struct();
		employs.push_back(employe);
		cout << "Adding Successfully!! \nDo you Want To Add More Employees Y/N ?";
		cin >> read_more;
		system("cls");
	}
	cout << "Do You Want To Display This Informations Y/N ? ";
	cin >> read_more;
	if (read_more == 'Y' || read_more == 'y')
	{
		system("cls");
		print_array_of_struct(employs);
	}
	else
		cout << "\nAll Informations Is Saved!!\n";

	return 0;
}


