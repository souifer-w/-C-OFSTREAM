
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void main()
{

	ofstream data;
	data.open("mo");
	string mm[] = { "ali" ,"omar" ,"otmane" ,"saida" };
	
	for (int  i = 0; i < 3; i++)
	{
		cout << mm[i] << endl;
	}

	data.close();
	system("pause");




}
