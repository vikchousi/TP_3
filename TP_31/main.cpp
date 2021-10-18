#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include "figure.h"
using namespace std;
int main() {
	string flag;
	string temp;
	double a, b, c, eror;
	int ind = 0;
	double acur, bcur, ccur;
	ifstream input("C:\\Users\\victoria lopukhova\\Desktop\\input.txt");
	fstream output("C:\\Users\\victoria lopukhova\\Desktop\\output.txt");
	for (;;) {
		eror = 0;
		cout << "Figure " << endl;
		cout << "---------------------------" << endl;
		cout << "1 - Add a new figure" << endl;
		cout << "2 - Delete the figure" << endl;
		cout << "3 - Change figure information" << endl;
		cout << "4 - Display shape information on screen" << endl;
		cout << "5 - Exit" << endl;
		cout << "---------------------------" << endl;
		cout << "Select an operation and type its number" << endl;
		cin >> flag;
		if (flag == "1") {
			cout << "---------------------------" << endl;
			cout << "New figure type" << endl;
			cout << "---------------------------" << endl;
			cout << "1 - Rectangle" << endl;
			cout << "2 - Circle" << endl;
			cout << "3 - Triangle" << endl;
			cout << "4 - Parallelepiped" << endl;
			cout << "5 - Ball" << endl;
			cout << "---------------------------" << endl;
			cout << "Select an operation and type its number" << endl;
			cin >> flag;
			if (flag == "1") {
				cout << "---------------------------" << endl;
				cout << "Enter width of the new rectangle" << endl;
				cout << "---------------------------" << endl;
				cin >> temp;
				try {
					a = stoi(temp);
				}
				catch (std::invalid_argument e) {
					eror++;
				}
				cout << "---------------------------" << endl;
				cout << "Enter height of the new rectangle" << endl;
				cout << "---------------------------" << endl;
				cin >> temp;
				try {
					b = stoi(temp);
				}
				catch (std::invalid_argument e) {
					eror++;
				}
				if ((eror > 0) || (a < 0) || (b < 0)) {
					system("cls");
					cout << "An error occurred while writing the arguments, try entering them again" << endl;
				}
				else {
					system("cls");
					cout << "The operation completed successfully" <<
						endl;
					acur = a;
					bcur = b;
				}
			}
			else if (flag == "2") {
				cout << "---------------------------" << endl;
				cout << "Enter radius of the new circle" << endl;
				cout << "---------------------------" << endl;
				cin >> temp;
				try {
					a = stoi(temp);
				}
				catch (std::invalid_argument e) {
					eror++;
				}
				if ((eror > 0) || (a < 0)) {
					system("cls");
					cout << "An error occurred while writing the arguments, try entering them again" << endl;
				}
				else {
					system("cls");
					cout << "The operation completed successfully" <<
						endl;
					acur = a;
				}
			}
			if (flag == "3") {
				cout << "---------------------------" << endl;
				cout << "Enter width of the new triangle" << endl;
				cout << "---------------------------" << endl;
				cin >> temp;
				try {
					a = stoi(temp);
				}
				catch (std::invalid_argument e) {
					eror++;
				}
				cout << "---------------------------" << endl;
				cout << "Enter height of the new triangle" << endl;
				cout << "---------------------------" << endl;
				cin >> temp;
				try {
					b = stoi(temp);
				}
				catch (std::invalid_argument e) {
					eror++;
				}
				if ((eror > 0) || (a < 0) || (b < 0)) {
					system("cls");
					cout << "An error occurred while writing the arguments, try entering them again" << endl;
				}
				else {
					system("cls");
					cout << "The operation completed successfully" <<
						endl;
					acur = a;
					bcur = b;
				}
			}
			else {
				system("cls");
				cout << "An error occurred while writing the arguments, try entering them again" << endl;
			}
			}
		}
	return 0;
	input.close();
	output.close();
}
