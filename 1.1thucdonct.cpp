#include<iostream>
using namespace std;
void menu()
{
    cout << "       Menu\n";
    cout << "1. Cong viec 1\n";
    cout << "2. Cong viec 2\n";
    cout << "3. Cong viec 3\n";
    cout << "4. Ket thuc chuong trinh\n";
    cout << "Lua chon";
}
int main()
{
    int lc;
    do
    {
        //viet menu len man hinh
        menu();
        //lay lua chon
        cin >> lc;
        switch(lc)
        {
            case 1:
                cout << "thuc hien cong viec 1\n";
                break;
            case 2:
                cout << "thuc hien cong viec 2\n";
                break;
            case 3:
                cout << "thuc hien cong viec 3\n";
                break;
        }
    //lap cho den khi nguoi su dung lua chon 4
    } while (lc!=4); 
    
}