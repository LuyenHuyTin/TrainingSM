#include<bits/stdc++.h>
using namespace std;
class faculty {
public:
    void viewSchedule();
    void cancelSchedule();
    void logout();
private:
    int choice;
};

void FacultyLogin()
{
    string userId = "admin";
    string password = "12345";
    string id, pass;
    cout << "\n\n------------------------------------------" << endl;
    cout << "         Welcome To The Faculty Page         " << endl;
    cout << "------------------------------------------" << endl;
    cout << "\n\nPlease Enter Your Username & Password For Authentiocation" << endl;

    cout << "\nEnter Your Username : ";
    cin >> id;

    cout << "\nEnter Your Password : ";
    cin >> pass;
    if(id == userId && pass == password){
        cout << "\nCongratulations " << userId << endl;
        cout << "Your login as faculty is successfull. Thanks for logging in.\n"
        << endl;
    }
    else
    {
        cout << "Your login as faculty is failed. Please fill information again.\n"
        << endl;
        cout << "\nEnter Your Username : ";
        cin >> id;

        cout << "\nEnter Your Password : ";
    }
}