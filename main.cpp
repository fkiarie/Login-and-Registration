#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
    int choice;

    cout << "\t\t ___________________________________________________\n" << endl;
    cout << "\t\t---------------WELCOME------------------------------\n" << endl;
    cout <<"\t\t ------------------MENU-------------------------------\n" << endl;
    cout << endl;
    cout << "\t | press 1 to LOGIN              |"<< endl;
    cout << "\t | press 2 to REGISTER           |"<< endl;
    cout << "\t | press 3 to RECOVER PASSWORD   |"<< endl;
    cout << "\t | press 4 to EXIT               |"<< endl;
    cout << endl;
    cin >> choice;
    
    return 0;
}