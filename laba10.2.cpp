#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void f1(char* str, int& k)
{
	    string path = "t.txt";
	    ifstream fin;
	    fin.open(path);
		while (!fin.eof())
		{
			fin.getline(str, 50);
			cout << str << endl;
			bool f = true;
			for (int i = 0; i < strlen(str); i++)
				if (str[i] == ' ')
				{
					f = true;
				}
				else
				{
					if (f && (str[i+1] != ' ' && str[i+1] != NULL))
					{
						k++;
						f = false;
					}
				}
		}
		fin.close();
}

int main()
{
	int k = 0;
	char str[50];
    f1(str, k);
	cout << endl;
	cout << "Kilkist' sliv = " << k << endl;

	return 0;
}