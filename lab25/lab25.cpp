//Daniel Vega
//March 7th 2017
//Creating program to 
#include<iostream>
#include<string>

using namespace std;

class bookInfo {
    public:
        string GetBookTitle         (string title);
        string GetBookAuthor        (string author);
        int GetBookCopyrightYear    (int copyrightYear);
        string SetAllBookInfo       (string allInfo);
        
    private:
        string title;
        string author;
        int    year;

};

string bookInfo::GetBookTitle(string title){
    return title;
}

string bookInfo::GetBookAuthor(string author){
    return author;
}

int bookInfo::GetBookCopyrightYear(int copyrightYear){
    return copyrightYear;
}

int main() {
    
    bookInfo book1;
    

cout << "Enter the name of a book: ";
    
}