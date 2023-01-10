#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    bool flag = false;      //проверка открылся ли файл

    ifstream file ("E:/3 term/SIAOD/lab1/main.txt");     //открытие файла
    if (!file.is_open())
        cout << "!!!WARNING!!!" << endl << "File wasn't opened" << endl;
    else
    {
        cout << "File opened succesfully!" << endl;
        flag = true;
    }

    ofstream rez ("E:/3 term/SIAOD/lab1/rez.txt");

    if (flag == true)
    {
        int a, b;
        file >> a >> b;
        for (int i =0; i<15; i++)
        {
            rez << a + b << " ";
            file >> b;
        }
    }

    file.close();
    rez.close();

    return 0;
}
