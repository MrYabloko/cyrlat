#include <iostream>
#include <string>
using namespace std;

int main ()
{
	bool lat=false;
	bool cyr=false;
	char x;
	cout << "enter strange symbol" << endl; cin >> x;
	string latalph="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string cyralph="абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	for (int i=0; i<=51; i++)
	{
		if (latalph[i]==x) { lat=true; break; }
	}
	for (int j=0; j<=65; j++)
	{
		if (cyralph[j]==x) { cyr=true; break; }
	}
	if (lat==true) { cout << "latin" << endl; }
	if (cyr==true) { cout << "cyryll" << endl; }
	if (lat==false && cyr==false) { cout << "non-latin-nor-cyrill" << endl; }
}
