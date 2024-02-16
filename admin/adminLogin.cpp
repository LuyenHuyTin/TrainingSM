#include </home/tindz/Cplus_ex/mini_prj/admin/adminLogin.h>

void Admin::allotTrainer()
{

}

void Admin::createScheldule()
{
    
}

void Admin::generateReport()
{

}

void Admin::updateSchedule()
{

}

void Admin::logout()
{

}
void Admin::adminLogin()
{
    string userId = "admin";
    string password = "12345";
    string id, pass;
    cout << "\n\n------------------------------------------" << endl;
    cout << "         Welcome To The Admin Page         " << endl;
    cout << "------------------------------------------" << endl;
    cout << "\n\nPlease Enter Your Username & Password For Authentiocation" << endl;

    cout << "\nEnter Your Username : ";
    cin >> id;

    cout << "\nEnter Your Password : ";
    cin >> pass;
    if(id == userId && pass == password){
        cout << "\nCongratulations " << userId << endl;
        cout << "Your login as administrator is successfull. Thanks for logging in.\n"
        << endl;
        selectModule();
    }
    else
    {
        cout << "Your login as administrator is failed. Please fill information again.\n"
        << endl;
        cout << "\nEnter Your Username : ";
        cin >> id;

        cout << "\nEnter Your Password : ";
    }
}
void Admin::selectModule(){
        cout << "\nHere's your Dashboard \nPlease enter your choice to perform particular tasks" << endl;
        cout << "\n\n--------------------------------------------------------" << endl;
        cout << "\tEnter 1 -> To Create New Schedule" << endl;
        cout << "\tEnter 2 -> To Update Existing Schedule" << endl;
        cout << "\tEnter 3 -> To Allot A Trainer" << endl;
        cout << "\tEnter 4 -> To Generate Report" << endl;
        cout << "\tEnter 5 -> To Quit From This Session" << endl;
        cout << "--------------------------------------------------------" << endl;
        int choice;
        cin >> choice;
        switch(choice)
        {
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
        }
}
Admin *Admin::mInstancePtr = nullptr;