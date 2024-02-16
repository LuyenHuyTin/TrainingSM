#include<bits/stdc++.h>
using namespace std;
class Admin {
public: 
    static Admin *getInstance()
    {
        if(nullptr == mInstancePtr){
            mInstancePtr = new Admin();
        }
        return mInstancePtr;
    }
    void createScheldule();

    void updateSchedule();

    void allotTrainer();

    void generateReport();

    void logout();
    void adminLogin();
    void selectModule();
private:
    Admin() {}
    int choice;  
    static Admin* mInstancePtr;  
};