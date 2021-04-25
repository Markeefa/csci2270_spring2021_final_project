#include <string>

struct singlyNode
{
    std::string fileName;
    std::string fileVersion;
    singlyNode* next;
};

struct doublyNode
{
    int commmitNumber;
    singlyNode* head;
    singlyNode* previous;
    doublyNode* next;
};



class miniGit
{
    private:


    public:
    miniGit();
    ~miniGit();
    
    void initialize();
    void addFile();
    void removeFile(std::string filename);
};
