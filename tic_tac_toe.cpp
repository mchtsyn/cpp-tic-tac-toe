#include <iostream>
#include <string>
#include <iomanip>
#include <sstream> 
using namespace std;

static char x;
static char y;

char playerOne = 'X';
char playerTwo = 'O';
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};

void Header() {
	cout << setw(47) << "Tic Tac Toe Game" << endl << endl;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

void PlaceIn_1() {
	
	cout << endl;
	cout << endl << "Enter the number you want to place ""X"" (1st Player):";
	cin >> x;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++)
		{
			if (matrix[i][j] == x)
			{
				matrix[i][j] = playerOne;
			}
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

void PlaceIn_2() {
	cout << endl << "Enter the number you want to place ""O"" (2nd Player):";
	cin >> y;
	cout << endl;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++)
		{
			if (matrix[i][j] == y)
			{
				matrix[i][j] = playerTwo;
			}
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}

int Winner(){
	for(int a=0;a<9;a++)
	{
		//for [00] && [02] && [20] && [22]
		for(int b=0;b<3;b++)
		{
			if  (((matrix[0][0]==matrix[0][1]&&matrix[0][0]==matrix[0][2])&&matrix[0][0]==playerOne)
			   ||((matrix[0][0]==matrix[1][0]&&matrix[0][0]==matrix[2][0])&&matrix[0][0]==playerOne)
			   ||((matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])&&matrix[0][0]==playerOne))
			{
				cout<<"The Winner is FIRST PLAYER !"<<endl;
			
				system("PAUSE");
			}
			else if (((matrix[0][0]==matrix[0][1]&&matrix[0][0]==matrix[0][2])&&matrix[0][0]==playerTwo)
			   		||((matrix[0][0]==matrix[1][0]&&matrix[0][0]==matrix[2][0])&&matrix[0][0]==playerTwo)
			   		||((matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])&&matrix[0][0]==playerTwo))
			{
				cout<<"The Winner is SECOND PLAYER !"<<endl;
				system("PAUSE");
			}
		}
		
		//for sides
		for(int c=0;c<2;c++)
		{
			if(((matrix[0][1]==matrix[1][1]&&matrix[0][1]==matrix[2][1])&&matrix[0][1]==playerOne)
			 ||((matrix[1][1]==matrix[1][0]&&matrix[1][1]==matrix[1][2])&&matrix[1][1]==playerOne))
			 {
			 	cout<<"The Winner is FIRST PLAYER !"<<endl;
				system("PAUSE");
			 }
			else if(((matrix[0][1]==matrix[1][1]&&matrix[0][1]==matrix[2][1])&&matrix[0][1]==playerTwo)
			 ||((matrix[1][1]==matrix[1][0]&&matrix[1][1]==matrix[1][2])&&matrix[1][1]==playerTwo))
			 {
			 	cout<<"The Winner is SECOND PLAYER !"<<endl;
				system("PAUSE");
			 }
		}
	}
}
int main() {
	
	Header();

	while (true) {
		PlaceIn_1();
		Winner();
		PlaceIn_2();
		Winner();
		}	
	

	

}
