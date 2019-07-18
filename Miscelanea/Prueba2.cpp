#include <iostream>
#include <vector>
#include <bitset>
#include <stdio.h>
#include <string>

using namespace std;

struct book{
    string title;
    string author;
    bool operator<(const book &other) const {
        if (author != other.author)
            return author < other.author;
        return title < other.title;
    }
};
int main(){
    string linebook,title,author;
    char t[85];
    char a[85];
    vector<book> books;
    vector<string> instructions;
    book temp;
    while(getline(cin,linebook),linebook!="END" ){
        sscanf(linebook.c_str(),"\"%[^\"]\" by %[^\n\r]",t,a);
        temp.title=t;
        temp.author=a;
    }
    string instr;
    int sizebooks=books.size();
    vector<bool>  returned;

    while(getline(cin,instr),instr!="END" ){
        instructions.push_back(instr);
    }

    return 0;
}
