#include <iostream>
#include <windows.h>
#include<string>
using namespace std;

void eng(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
            if (str[i] == 'a' || str[i] == 'A')
                result += "01 ";
            if (str[i] == 'b' || str[i] == 'B')
                result += "1000 ";
            if (str[i] == 'c' || str[i] == 'C')
                result += "1010 ";
            if (str[i] == 'd' || str[i] == 'D')
                result += "100 ";
            if (str[i] == 'e' || str[i] == 'E')
                result += "0 ";
            if (str[i] == 'f' || str[i] == 'F')
                result += "0010 ";
            if (str[i] == 'g' || str[i] == 'G')
                result += "110 ";
            if (str[i] == 'h' || str[i] == 'H')
                result += "0000 ";
            if (str[i] == 'i' || str[i] == 'I')
                result += "00 ";
            if (str[i] == 'j' || str[i] == 'J')
                result += "0111 ";
            if (str[i] == 'k' || str[i] == 'K')
                result += "101 ";
            if (str[i] == 'l' || str[i] == 'L')
                result += "0100 ";
            if (str[i] == 'm' || str[i] == 'M')
                result += "11 ";
            if (str[i] == 'n' || str[i] == 'N')
                result += "10 ";
            if (str[i] == 'o' || str[i] == 'O')
                result += "111 ";
            if (str[i] == 'p' || str[i] == 'P')
                result += "0110 ";
            if (str[i] == 'q' || str[i] == 'Q')
                result += "1101 ";
            if (str[i] == 'r' || str[i] == 'R')
                result += "010 ";
            if (str[i] == 's' || str[i] == 'S')
                result += "000 ";
            if (str[i] == 't' || str[i] == 'T')
                result += "1 ";
            if (str[i] == 'u' || str[i] == 'U')
                result += "001 ";
            if (str[i] == 'v' || str[i] == 'V')
                result += "0001 ";
            if (str[i] == 'w' || str[i] == 'W')
                result += "011 ";
            if (str[i] == 'x' || str[i] == 'X')
                result += "1001 ";
            if (str[i] == 'y' || str[i] == 'Y')
                result += "1011 ";
            if (str[i] == 'z' || str[i] == 'Z')
                result += "1100 ";
            if (str[i] == '.')
                result += ". ";
            if (str[i] == ',')
                result += ", ";
            if (str[i] == '\'')
                result += "\' ";
            if (str[i] == '_')
                result += "_ ";
            if (str[i] == ' ')
                result += " ";
            if (str[i] == '-')
                result += "- ";
            if (str[i] == '!')
                result += "! ";
            if (str[i] == '&')
                result += "& ";
            if (str[i] == '@')
                result += "@ ";
            if (str[i] == '?')
                result += "? ";
            if (str[i] == ')')
                result += ") ";
            if (str[i] == '(')
                result += "( ";
            if (str[i] == '%')
                result += "% ";
            if (str[i] == '1')
                result += "01111 ";
            if (str[i] == '2')
                result += "00111 ";
            if (str[i] == '3')
                result += "00011 ";
            if (str[i] == '4')
                result += "00001 ";
            if (str[i] == '5')
                result += "00000 ";
            if (str[i] == '6')
                result += "10000 ";
            if (str[i] == '7')
                result += "11000 ";
            if (str[i] == '8')
                result += "11100 ";
            if (str[i] == '9')
                result += "11110 ";
            if (str[i] == '0')
                result += "11111 ";
    }
    cout << "\nResult: " << result << endl;
}

void rus(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '�' || str[i] == '�')
            result += "01 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1000 ";
        if (str[i] == '�' || str[i] == '�')
            result += "011 ";
        if (str[i] == '�' || str[i] == '�')
            result += "110 ";
        if (str[i] == '�' || str[i] == '�')
            result += "100 ";
        if (str[i] == '�' || str[i] == '�' || str[i] == '�' || str[i] == '�')
            result += "0 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0001 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1100 ";
        if (str[i] == '�' || str[i] == '�')
            result += "00 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0111 ";
        if (str[i] == '�' || str[i] == '�')
            result += "101 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0100 ";
        if (str[i] == '�' || str[i] == '�')
            result += "11 ";
        if (str[i] == '�' || str[i] == '�')
            result += "10 ";
        if (str[i] == '�' || str[i] == '�')
            result += "111 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0110 ";
        if (str[i] == '�' || str[i] == '�')
            result += "010 ";
        if (str[i] == '�' || str[i] == '�')
            result += "000 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1 ";
        if (str[i] == '�' || str[i] == '�')
            result += "001 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0010 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0000 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1010 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1110 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1111 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1101 ";
        if (str[i] == '�' || str[i] == '�')
            result += "011010 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1011 ";
        if (str[i] == '�' || str[i] == '�')
            result += "1001 ";
        if (str[i] == '�' || str[i] == '�')
            result += "00100 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0011 ";
        if (str[i] == '�' || str[i] == '�')
            result += "0101 ";
        if (str[i] == '.')
            result += ". ";
        if (str[i] == ',')
            result += ", ";
        if (str[i] == '\'')
            result += "\' ";
        if (str[i] == '_')
            result += "_ ";
        if (str[i] == ' ')
            result += " ";
        if (str[i] == '-')
            result += "- ";
        if (str[i] == '!')
            result += "! ";
        if (str[i] == '&')
            result += "& ";
        if (str[i] == '@')
            result += "@ ";
        if (str[i] == '?')
            result += "? ";
        if (str[i] == ')')
            result += ") ";
        if (str[i] == '(')
            result += "( ";
        if (str[i] == '%')
            result += "% ";
        if (str[i] == '1')
            result += "01111 ";
        if (str[i] == '2')
            result += "00111 ";
        if (str[i] == '3')
            result += "00011 ";
        if (str[i] == '4')
            result += "00001 ";
        if (str[i] == '5')
            result += "00000 ";
        if (str[i] == '6')
            result += "10000 ";
        if (str[i] == '7')
            result += "11000 ";
        if (str[i] == '8')
            result += "11100 ";
        if (str[i] == '9')
            result += "11110 ";
        if (str[i] == '0')
            result += "11111 ";
    }
    cout << "\nResult: " << result << endl;
}

void toeng(string str)
{
    string result = "", temp = "", temp1 = "", temp2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            temp2 += temp = str[i];
            continue;
        }

        temp1 = str[i];        
        if (temp1 != " ")
        {
            if (temp != " ")
                temp2 += temp1;
            else
            {
                temp2 = "";
                temp2 += temp1;
            }
        }
        else
        {
            l:
            if (temp2 == "01")
                result += 'a';
            if (temp2 == "1000")
                result += 'b';
            if (temp2 == "1010")
                result += 'c';
            if (temp2 == "100")
                result += 'd';
            if (temp2 == "0")
                result += 'e';
            if (temp2 == "0010")
                result += 'f';
            if (temp2 == "110")
                result += 'g';
            if (temp2 == "0000")
                result += 'h';
            if (temp2 == "00")
                result += 'i';
            if (temp2 == "0111")
                result += 'j';
            if (temp2 == "101")
                result += 'k';
            if (temp2 == "0100")
                result += 'l';
            if (temp2 == "11")
                result += 'm';
            if (temp2 == "10")
                result += 'n';
            if (temp2 == "111")
                result += 'o';
            if (temp2 == "0110")
                result += 'p';
            if (temp2 == "1101")
                result += 'q';
            if (temp2 == "010")
                result += 'r';
            if (temp2 == "000")
                result += 's';
            if (temp2 == "1")
                result += 't';
            if (temp2 == "001")
                result += 'u';
            if (temp2 == "0001")
                result += 'v';
            if (temp2 == "011")
                result += 'w';
            if (temp2 == "1001")
                result += 'x';
            if (temp2 == "1011")
                result += 'y';
            if (temp2 == "1100")
                result += 'z';
            if (temp2 == ".")
                result += '.';
            if (temp2 == ",")
                result += ',';
            if (temp2 == "\"")
                result += '\"';
            if (temp2 == "_")
                result += '_';
            if (temp2 == "-")
                result += '-';
            if (temp2 == "!")
                result += '!';
            if (temp2 == "&")
                result += '&';
            if (temp2 == "@")
                result += '@';
            if (temp2 == "?")
                result += '?';
            if (temp2 == ")")
                result += ')';
            if (temp2 == "(")
                result += '(';
            if (temp2 == "%")
                result += '%';
            if (temp2 == "01111")
                result += '1';
            if (temp2 == "00111")
                result += '2';
            if (temp2 == "00011")
                result += '3';
            if (temp2 == "00001")
                result += '4';
            if (temp2 == "00000")
                result += '5';
            if (temp2 == "10000")
                result += '6';
            if (temp2 == "11000")
                result += '7';
            if (temp2 == "11100")
                result += '8';
            if (temp2 == "11110")
                result += '9';
            if (temp2 == "11111")
                result += '0';
            if (i == str.length() - 1)
                break;
            if (str[i] == ' ' && temp != " ")
            {
                temp = str[i];
                temp2 = "";
                continue;
            }
            if (temp == " " && temp1 == " ")
            {
                result += " ";
                temp2 = "";
                continue;
            }
        }
        temp = str[i];
        if (i == str.length() - 1)
            goto l;
    }
    cout << "\nResult: " << result << endl;
}

void torus(string str)
{
    string result = "", temp = "", temp1 = "", temp2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0)
        {
            temp2 += temp = str[i];
            continue;
        }

        temp1 = str[i];
        if (temp1 != " ")
        {
            if (temp != " ")
                temp2 += temp1;
            else
            {
                temp2 = "";
                temp2 += temp1;
            }
        }
        else
        {
        l:
            if (temp2 == "01")
                result += '�';
            if (temp2 == "1000")
                result += '�';
            if (temp2 == "011")
                result += '�';
            if (temp2 == "110")
                result += '�';
            if (temp2 == "100")
                result += '�';
            if (temp2 == "0")
                result += '�';
            if (temp2 == "0001")
                result += '�';
            if (temp2 == "1100")
                result += '�';
            if (temp2 == "00")
                result += '�';
            if (temp2 == "0111")
                result += '�';
            if (temp2 == "101")
                result += '�';
            if (temp2 == "0100")
                result += '�';
            if (temp2 == "11")
                result += '�';
            if (temp2 == "10")
                result += '�';
            if (temp2 == "111")
                result += '�';
            if (temp2 == "0110")
                result += '�';
            if (temp2 == "010")
                result += '�';
            if (temp2 == "000")
                result += '�';
            if (temp2 == "1")
                result += '�';
            if (temp2 == "001")
                result += '�';
            if (temp2 == "0010")
                result += '�';
            if (temp2 == "0000")
                result += '�';
            if (temp2 == "1010")
                result += '�';
            if (temp2 == "1110")
                result += '�';
            if (temp2 == "1111")
                result += '�';
            if (temp2 == "1101")
                result += '�';
            if (temp2 == "011010")
                result += '�';
            if (temp2 == "1011")
                result += '�';
            if (temp2 == "1001")
                result += '�';
            if (temp2 == "00100")
                result += '�';
            if (temp2 == "0011")
                result += '�';
            if (temp2 == "0101")
                result += '�';
            if (temp2 == ".")
                result += '.';
            if (temp2 == ",")
                result += ',';
            if (temp2 == "\"")
                result += '\"';
            if (temp2 == "_")
                result += '_';
            if (temp2 == "-")
                result += '-';
            if (temp2 == "!")
                result += '!';
            if (temp2 == "&")
                result += '&';
            if (temp2 == "@")
                result += '@';
            if (temp2 == "?")
                result += '?';
            if (temp2 == ")")
                result += ')';
            if (temp2 == "(")
                result += '(';
            if (temp2 == "%")
                result += '%';
            if (temp2 == "01111")
                result += '1';
            if (temp2 == "00111")
                result += '2';
            if (temp2 == "00011")
                result += '3';
            if (temp2 == "00001")
                result += '4';
            if (temp2 == "00000")
                result += '5';
            if (temp2 == "10000")
                result += '6';
            if (temp2 == "11000")
                result += '7';
            if (temp2 == "11100")
                result += '8';
            if (temp2 == "11110")
                result += '9';
            if (temp2 == "11111")
                result += '0';
            if (i == str.length() - 1)
                break;
            if (str[i] == ' ' && temp != " ")
            {
                temp = str[i];
                temp2 = "";
                continue;
            }
            if (temp == " " && temp1 == " ")
            {
                result += " ";
                temp2 = "";
                continue;
            }
        }
        temp = str[i];
        if (i == str.length() - 1)
            goto l;
    }
    cout << "\nResult: " << result << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    link:
    cout << "\tMorse code translator\nby Kamishiro Iyamoto\n\n\n\t0 - dot\n\t1 - dash\n\n\n The program supports English and Russian. Enter your language(e/r), but to exit the program, enter q. (To play a sound and scare your non-programmer friend, enter s)\n\n";
    
    char l;
    cin >> l;
    cin.ignore(32767, '\n');
    system("cls");
    
    if (l == 'e')
    {
        cout << "Translate English into Morse code or Morse code into English?(e/m): ";
        cin >> l;
        cin.ignore(32767, '\n');
        if (l == 'e')
        {
            cout << "Enter your text: ";
            string str;
            getline(cin, str);
            eng(str);
        }
        if (l == 'm')
        {
            cout << "Enter your text: ";
            string str;
            getline(cin, str);
            toeng(str);
        }
    }
    if (l == 'r')
    {
        cout << "��������� � �������� �� ������ �����(r) ��� � ������ ����� �� �������(m): ";
        cin >> l;
        cin.ignore(32767, '\n');
        if (l == 'r')
        {
            cout << "������� �����: ";
            string str;
            getline(cin, str);
            rus(str);
        }
        if (l == 'm')
        {
            cout << "������� �����: ";
            string str;
            getline(cin, str);
            torus(str);
        }
    }
    if (l == 's')
        cout << '\a';
    if (l == 'q')
        return 0;

    system("pause");
    system("cls");
    goto link;
}