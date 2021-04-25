#include <iostream>
#include <filesystem>
#include <fstream>
#include "miniGit.hpp"
#include <string>

using namespace std;
namespace fs = std::filesystem;

miniGit::miniGit()
{
    fs::remove_all(".minigit");
    fs::create_directory(".minigit");
}

miniGit::~miniGit()
{
    fs::remove_all(".minigit");
}

// This function does two things
// 1. Create a sub-directory 
void miniGit::initialize()
{

}

void miniGit::addFile()
{

}

void miniGit::removeFile(string filename)
{
    
}


// This function copies contents from one file into another 
void copyfile(string file1, string file2)
{
    ifstream f1(file1);
    ofstream f2(file2);
    char c1, c2;
    bool flag = true;

    if (!f1.is_open())
    {
        cout << "The input file is not open!\n";
        return;
    }

    if (!f2.is_open())
    {
        cout << "Could not open output file\n";
        return;
    }

    while(true)
    {
        c1=f1.get();

        if (c1 = EOF)
        {
            break;
        }

        f2 << c1;
    }

    f1.close();
    f2.close();
}

// This function checks if two files have the same contents
bool isequal(string file1, string file2)
{
    ifstream f1(file1), f2(file2);
    char c1, c2;
    
    if (!f1.is_open() && !f2.is_open())
    {
        return true;
    }

    if (!f1.is_open() || !f2.is_open())
    {
        return false;
    }
}
