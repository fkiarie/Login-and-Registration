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
    cout << "\t\tEnter choice: ";
    cin >> choice;
    
    switch(choice){
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "\t Thank you" << endl;
            exit(0);
        default:
            system("cls");
            cout << "\t Select from the given options in the menu" << endl;
            main();
    }

    
    return 0;
}
void login()
    {
        int count;
        string userID, password, id, pass;
        system("cls");
        cout << "\t Please enter username and password: " << endl;
        cout << "\t Username: ";
        cin >> userID;
        cout << "\t Password: ";
        cin >> password;

        ifstream input("records.txt");
        while(input>>id>>pass){
            if(id == userID && pass == password){
                count = 1;
                system("cls");
            }
        }
        input.close();
        if(count == 1){
            cout<<userID<< "\t, login is successful"<< endl;
            main();
        }else{
            cout <<"LOGIN ERROR \t confirm your username and password again" << endl;
            main();
        }
    }
void registration()
{
    string ruserID, rpassword, rID, rpass;
    system("cls");
    cout << "\t Enter username: ";
    cin >> ruserID;
    cout << "\t Enter password: ";
    cin >>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserID<< " " << rpassword<< endl;
    system("cls");
    cout << "\t Registration successful" << endl;
    main();
}
void forgot()
{
    int option;
    system("cls");
    cout << "\t forgot password? no worries" << endl;
    cout << "\t press 1 to search username by ID " << endl;
    cout << "\t Press 2 to go back to the main menu" << endl;
    cout << "\t Enter choice: ";
    cin >> option;
    switch(option){
        case 1 :
        {
            int count =0;
            string suserID, sID, spass;
            cout << "\t Enter username: ";
            cin >> suserID;

            ifstream f2("records.txt");
            while (f2>> sID>>spass)
            {
                if (sID == suserID)
                {
                    count = 1;
                }
                
            }
            f2.close();
            if (count == 1)
            {
                cout<< "\t Account found" << endl;
                cout << "\t Your password is: " << spass << endl;
                main();
            }
            else{
                cout << "Account not found" << endl;
            }
        }
           
            break;
        case 2:
        {
            main();
        }
            
        break;

        default: 
            cout << "\tWrong choice!" << endl;
            forgot();
        break;  
            


        
    }
}