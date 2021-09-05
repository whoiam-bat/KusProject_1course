#include <iostream>
#include <windows.h>
#include <string> 
#include<fstream>
#define N 100000
using namespace std;

string beep_it(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '.')
            Beep(600, 400);
        if (str[i] == '-')
            Beep(600, 800);
    }
    return str;
}
void convert(char txt[])
{
    int size;
    size = strlen(txt);
    cout << "Size of your text: ";
    cout << size << endl;
    for (int i = 0; i <size; i++)
    {
        if (txt[i] == ' ')
            cout << "";
        else if (txt[i] == '_')
            cout << beep_it("-...-");
        else if (txt[i] == '0')
            cout << beep_it("-----");
        else if (txt[i] == '1')
            cout << beep_it(".----");
        else if (txt[i] == '2')
            cout << beep_it("..---");
        else if (txt[i] == '3')
            cout << beep_it("...--");
        else if (txt[i] == '4')
            cout << beep_it("....-");
        else if (txt[i] == '5')
            cout << beep_it(".....");
        else if (txt[i] == '6')
            cout << beep_it("-....");
        else if (txt[i] == '7')
            cout << beep_it("--...");
        else if (txt[i] == '8')
            cout << beep_it("---..");
        else if (txt[i] == '9')
            cout << beep_it("----.");
        else if (txt[i] == 'A' || txt[i] == 'a')
            cout << beep_it(".-");
        else if (txt[i] == 'B' || txt[i] == 'b')
            cout << beep_it("-...");
        else if (txt[i] == 'C' || txt[i] == 'c')
            cout << beep_it("-.-.");
        else if (txt[i] == 'D' || txt[i] == 'd')
            cout << beep_it("-..");
        else if (txt[i] == 'E' || txt[i] == 'e')
            cout << beep_it(".");
        else if (txt[i] == 'F' || txt[i] == 'f')
            cout << beep_it("..-.");
        else if (txt[i] == 'G' || txt[i] == 'g')
            cout << beep_it("--.");
        else if (txt[i] == 'H' || txt[i] == 'h')
            cout << beep_it("....");
        else if (txt[i] == 'I' || txt[i] == 'i')
            cout << beep_it("..");
        else if (txt[i] == 'J' || txt[i] == 'j')
            cout << beep_it(".---");
        else if (txt[i] == 'K' || txt[i] == 'k')
            cout << beep_it("-.-");
        else if (txt[i] == 'L' || txt[i] == 'l')
            cout << beep_it(".-..");
        else if (txt[i] == 'M' || txt[i] == 'm')
            cout << beep_it("--");
        else if (txt[i] == 'N' || txt[i] == 'n')
            cout << beep_it("-.");
        else if (txt[i] == 'O' || txt[i] == 'o')
            cout << beep_it("---");
        else if (txt[i] == 'P' || txt[i] == 'p')
            cout << beep_it(".--.");
        else if (txt[i] == 'Q' || txt[i] == 'q')
            cout << beep_it("--.-");
        else if (txt[i] == 'R' || txt[i] == 'r')
            cout << beep_it(".-.");
        else if (txt[i] == 'S' || txt[i] == 's')
            cout << beep_it("...");
        else if (txt[i] == 'T' || txt[i] == 't')
            cout << beep_it("-");
        else if (txt[i] == 'U' || txt[i] == 'u')
            cout << beep_it("..-");
        else if (txt[i] == 'V' || txt[i] == 'v')
            cout << beep_it("...-");
        else if (txt[i] == 'W' || txt[i] == 'w')
            cout << beep_it(".--");
        else if (txt[i] == 'X' || txt[i] == 'x')
            cout << beep_it("-..-");
        else if (txt[i] == 'Y' || txt[i] == 'y')
            cout << beep_it("-.--");
        else if (txt[i] == 'Z' || txt[i] == 'z')
            cout << beep_it("--..");
        else if (txt[i] == '.')
            cout << beep_it("......");
        else if (txt[i] == ',')
            cout << beep_it(".-.-.-");
        else if (txt[i] == ':')
            cout << beep_it("-- - ...");
        else if (txt[i] == ';')
            cout << beep_it("-.-.-.");
        else if (txt[i] == '(')
            cout << beep_it("-.--.-");
        else if (txt[i] == ')')
            cout << beep_it("-.--.-");
        else if (txt[i] == '"')
            cout << beep_it(".-..-.");
        else if (txt[i] == '-')
            cout << beep_it("-....-");
        else if (txt[i] == '/')
            cout << beep_it("-..-.");
        else if (txt[i] == '?')
            cout << beep_it("..--..");
        else if (txt[i] == '!')
            cout << beep_it("--..--");
        else if (txt[i] == '@')
            cout << beep_it(".--.-.");
    }
}
void fill_file(char txt[])
{
    string path("LangFile.txt");
    ofstream fout;
    fout.open(path, ofstream::app);
    if (!fout.is_open())
    {
        cout << "Error, failed to open file!\n";
    }
    else
    {
        for (int i = 0;i<=strlen(txt); i++)
        {
            fout << txt[i];
        }
    }
    fout.close();
}
int main()
{
    char txt[N];
    cout << "Enter text:\n";
    cin.get(txt, N);
    cout << "Translated text:\n";
    convert(txt);
    cout << "\n\n";
    fill_file(txt);
    system("pause");
    return 0;
}

