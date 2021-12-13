#include <iostream>
#include <fstream>
#include <cstdlib>
#include <regex>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str = "";
    
while (true) {
    cout << "Имя файла:";
    try {
        getline(cin, str, '\n');
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        ifstream ff(str);
        if (ff.is_open())
        {
            cout << "Файл существует" << endl;
        }
        else
            cout << "Файл не найден" << endl;
    }
    catch (const char* msg) {
        cout << "Error" << msg << endl;
    }
}
    system("pause");
    return 0;
}
