#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool checkUsername(const string user)
{
    ifstream file("user.txt");
    string line;

    
        while (getline(file, line)) 
        { 
            if (line.find(user + ":") == 0)
            return true;
        }
       
    
    
    return false;
}

void registration()
{
    string username, password;
    
    cout<<"Enter a username: ";
    cin>>username;
    
    if (checkUsername(username))
    {
        cout << "Username already exists. Try another one.\n";
        return;
    }
    
    cout<<"Enter a password: ";
    cin>>password;
    
    ofstream file("user.txt", ios::app);
    
    if(file.is_open())
    {
        
    file<<username<<":"<<password<<endl;
    
    }
    else {
        cout<<"Error try again."<<endl;
    }
    
}


void login()
{
    string username, password;
    
    cout<<"Enter your username: ";
    cin>>username;
    
    cout<<"Enter your password: ";
    cin>>password;
    
    ifstream file("user.txt");
    string line;
    
    bool exist = false;
    
    while(getline(file,line))
    {
        if(line.find(username + ":" + password) == 0)
        {
            exist = true;
        }
    }
    
    
    if (exist)
    {
        cout << "Login successful!\n";
    }
    
    else
    {
        cout << "Invalid username or password.\n";
    }
    
    
}


int main() {
    
    int choice;
    cout << "1. Register\n2. Login\nEnter choice: ";
    cin>>choice;
   
    if(choice == 1 ) {
        registration();
    }
    else if (choice == 2) {
        login();
    }
    else {
        cout<<"Invalid choice.\n";
    }
    
    
    return 0;
}
