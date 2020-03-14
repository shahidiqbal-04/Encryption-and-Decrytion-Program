#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter limit of your msg : ";
	cin >> n;
	char simplemsg[1000], encrycode[1000], decrycode[1000];
	cout << "Enter text to send : \n";
	for (int i = 0; i < n; i++)
	{
		cin >> simplemsg[i];
	}
	cout << "Simple Text is : \n";
	for (int i = 0; i < n; i++)
	{
		cout << simplemsg[i] << "  ";
	}
	for (int i = 0; i < n; i++)
	{
		if (simplemsg[i] == 'A' || simplemsg[i] == 'a')
		{
			encrycode[i] = 'Z';
		}
		if (simplemsg[i] == 'B' || simplemsg[i] == 'b')
		{
			encrycode[i] = 'K';
		}
		if (simplemsg[i] == 'C' || simplemsg[i] == 'c')
		{
			encrycode[i] = 'S';
		}
		if (simplemsg[i] == 'D' || simplemsg[i] == 'd')
		{
			encrycode[i] = 'A';
		}
		if (simplemsg[i] == 'E' || simplemsg[i] == 'e')
		{
			encrycode[i] = 'H';
		}
		if (simplemsg[i] == 'F' || simplemsg[i] == 'f')
		{
			encrycode[i] = 'U';
		}
		if (simplemsg[i] == 'G' || simplemsg[i] == 'g')
		{
			encrycode[i] = 'M';
		}
		if (simplemsg[i] == 'H' || simplemsg[i] == 'h')
		{
			encrycode[i] = 'J';
		}
		if (simplemsg[i] == 'I' || simplemsg[i] == 'i')
		{
			encrycode[i] = 'X';
		}
		if (simplemsg[i] == 'J' || simplemsg[i] == 'j')
		{
			encrycode[i] = 'N';
		}
		if (simplemsg[i] == 'K' || simplemsg[i] == 'k')
		{
			encrycode[i] = 'I';
		}
		if (simplemsg[i] == 'L' || simplemsg[i] == 'l')
		{
			encrycode[i] = 'B';
		}
		if (simplemsg[i] == 'M' || simplemsg[i] == 'm')
		{
			encrycode[i] = 'F';
		}
		if (simplemsg[i] == 'N' || simplemsg[i] == 'n')
		{
			encrycode[i] = 'V';
		}
		if (simplemsg[i] == 'O' || simplemsg[i] == 'o')
		{
			encrycode[i] = 'R';
		}
		if (simplemsg[i] == 'P' || simplemsg[i] == 'p')
		{
			encrycode[i] = 'L';
		}
		if (simplemsg[i] == 'Q' || simplemsg[i] == 'q')
		{
			encrycode[i] = 'W';
		}
		if (simplemsg[i] == 'R' || simplemsg[i] == 'r')
		{
			encrycode[i] = 'E';
		}
		if (simplemsg[i] == 'S' || simplemsg[i] == 's')
		{
			encrycode[i] = 'Q';
		}
		if (simplemsg[i] == 'T' || simplemsg[i] == 't')
		{
			encrycode[i] = 'P';
		}
		if (simplemsg[i] == 'U' || simplemsg[i] == 'u')
		{
			encrycode[i] = 'C';
		}
		if (simplemsg[i] == 'V' || simplemsg[i] == 'v')
		{
			encrycode[i] = 'T';
		}
		if (simplemsg[i] == 'W' || simplemsg[i] == 'w')
		{
			encrycode[i] = 'O';
		}
		if (simplemsg[i] == 'X' || simplemsg[i] == 'x')
		{
			encrycode[i] = 'D';
		}
		if (simplemsg[i] == 'Y' || simplemsg[i] == 'y')
		{
			encrycode[i] = 'Y';
		}
		if (simplemsg[i] == 'Z' || simplemsg[i] == 'z')
		{
			encrycode[i] = 'G';
		}
		if (simplemsg[i] == '0')
		{
			encrycode[i] = '0';
		}
		if (simplemsg[i] == '1')
		{
			encrycode[i] = '1';
		}
		if (simplemsg[i] == '2')
		{
			encrycode[i] = '2';
		}
		if (simplemsg[i] == '3')
		{
			encrycode[i] = '3';
		}
		if (simplemsg[i] == '4')
		{
			encrycode[i] = '4';
		}
		if (simplemsg[i] == '5')
		{
			encrycode[i] = '5';
		}
		if (simplemsg[i] == '6')
		{
			encrycode[i] = '6';
		}
		if (simplemsg[i] == '7')
		{
			encrycode[i] = '7';
		}
		if (simplemsg[i] == '8')
		{
			encrycode[i] = '8';
		}
		if (simplemsg[i] == '9')
		{
			encrycode[i] = '9';
		}
	}
	cout << "\nReciver Recives : (After Encryption) \n";
	for (int i = 0; i < n; i++)
	{
		cout << encrycode[i] << "  ";
	}
	for (int i = 0; i < n; i++)
	{
		if (encrycode[i] == 'A')
		{
			decrycode[i] = 'D';
		}
		if (encrycode[i] == 'B')
		{
			decrycode[i] = 'L';
		}
		if (encrycode[i] == 'C')
		{
			decrycode[i] = 'U';
		}
		if (encrycode[i] == 'D')
		{
			decrycode[i] = 'X';
		}
		if (encrycode[i] == 'E')
		{
			decrycode[i] = 'R';
		}
		if (encrycode[i] == 'F')
		{
			decrycode[i] = 'M';
		}
		if (encrycode[i] == 'G')
		{
			decrycode[i] = 'Z';
		}
		if (encrycode[i] == 'H')
		{
			decrycode[i] = 'E';
		}
		if (encrycode[i] == 'I')
		{
			decrycode[i] = 'K';
		}
		if (encrycode[i] == 'J')
		{
			decrycode[i] = 'H';
		}
		if (encrycode[i] == 'K')
		{
			decrycode[i] = 'B';
		}
		if (encrycode[i] == 'L')
		{
			decrycode[i] = 'P';
		}
		if (encrycode[i] == 'M')
		{
			decrycode[i] = 'G';
		}
		if (encrycode[i] == 'N')
		{
			decrycode[i] = 'J';
		}
		if (encrycode[i] == 'O')
		{
			decrycode[i] = 'W';
		}
		if (encrycode[i] == 'P')
		{
			decrycode[i] = 'T';
		}
		if (encrycode[i] == 'Q')
		{
			decrycode[i] = 'S';
		}
		if (encrycode[i] == 'R')
		{
			decrycode[i] = 'O';
		}
		if (encrycode[i] == 'S')
		{
			decrycode[i] = 'C';
		}
		if (encrycode[i] == 'T')
		{
			decrycode[i] = 'V';
		}
		if (encrycode[i] == 'U')
		{
			decrycode[i] = 'F';
		}
		if (encrycode[i] == 'V')
		{
			decrycode[i] = 'N';
		}
		if (encrycode[i] == 'W')
		{
			decrycode[i] = 'Q';
		}
		if (encrycode[i] == 'X')
		{
			decrycode[i] = 'I';
		}
		if (encrycode[i] == 'Y')
		{
			decrycode[i] = 'Y';
		}
		if (encrycode[i] == 'Z')
		{
			decrycode[i] = 'A';
		}
		if (encrycode[i] == '0')
		{
			decrycode[i] = '0';
		}
		if (encrycode[i] == '1')
		{
			decrycode[i] = '1';
		}
		if (encrycode[i] == '2')
		{
			decrycode[i] = '2';
		}
		if (encrycode[i] == '3')
		{
			decrycode[i] = '3';
		}
		if (encrycode[i] == '4')
		{
			decrycode[i] = '4';
		}
		if (encrycode[i] == '5')
		{
			decrycode[i] = '5';
		}
		if (encrycode[i] == '6')
		{
			decrycode[i] = '6';
		}
		if (encrycode[i] == '7')
		{
			decrycode[i] = '7';
		}
		if (encrycode[i] == '8')
		{
			decrycode[i] = '8';
		}
		if (encrycode[i] == '9')
		{
			decrycode[i] = '9';
		}
	}
	cout << "\nReciver Recives : (After Decryption) \n";
	for (int i = 0; i < n; i++)
	{
		cout << decrycode[i] << "  ";
	}
}