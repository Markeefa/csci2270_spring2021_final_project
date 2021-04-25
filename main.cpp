#include <iostream>
#include "miniGit.hpp"
#include <filesystem>

namespace fs = std::filesystem;

using namespace std;


void menuDisplay()
{
    cout << "==============MAIN MENU==================" << endl;
    cout << "Choose an option from the following menu:" << endl;
    cout << endl;
    cout << "1.Initialize git system." << endl;
    cout << "2. Add files to the curret commit." << endl;
    cout << "3. Remove files to the crrent commit." << endl;
    cout << "4. Commit changes." << endl;
    cout << "5. Checkout specific version based on unique commit number." << endl;
    cout << "6. Exit program." << endl;
    cout << endl;
}

int main(int argc, char* argv[])
{

    int choice;
    string tobedeleted = "";

    do
    {
        menuDisplay();
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Not yet implemented." << endl;
                break;

            case 2:
                
                cout << "Not yet implemented" << endl;
                break;

            case 3:
                cout << "Not yet implemented" << endl;
                cout << "Enter the name of the file you yould like to delete: ";
                cin >> tobedeleted;


                break;

            case 4:
                cout << "Not yet implemented" << endl;
                break;

            case 5:
                cout << "Not yet implemented" << endl;
                break;

            case 6:
                cout << "The program will now exit!!" << endl;
                return 0;

            default:
                cout << "YOU ENTERED AN INVALID OPTION!!\n";
                cout << "Please enter a valid option." << endl;
                cout << endl;
                break;
        }
    }while(choice != 6);




    return 0;
}
