#include<bits/stdc++.h>
#include</home/tindz/Cplus_ex/mini_prj/include/adminLogin.h>
#include</home/tindz/Cplus_ex/mini_prj/include/FacultyLogin.h>

using namespace std;
int main() {
    int choice;
    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "               Training Schedule Management System                  " << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "\n\n\t\tWelcome To Home Page" << endl;
    cout << "\n\t\tPress 1 --> Admin Login" << endl;
    cout << "\t\tPress 2 --> Faculty Login" << endl;
    cout << "\t\tPress 3 --> Exit" << endl;
    cout << "\nPlease Enter Your Choice : ";
    Admin ad;
    cin >> choice;
    switch(choice){
        case 1:
            ad.adminLogin();
            break;
        case 2:
            FacultyLogin();
            break;
    }
}