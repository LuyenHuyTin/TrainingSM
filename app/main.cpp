#include<bits/stdc++.h>
#include</home/tindz/Cplus_ex/mini_prj/admin/adminLogin.h>
#include</home/tindz/Cplus_ex/mini_prj/faculty/FacultyLogin.h>

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
    cin >> choice;
    Admin *admin;
    admin = Admin::getInstance();
    switch(choice)
    {
        case 1:
            admin->adminLogin();
            break;
        case 2:
            FacultyLogin();
            break;
    }
}