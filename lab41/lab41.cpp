//Daniel Vega
//April 11th 2017
//
#include <iostream>
    
using namespace std;

class ArrayTools{
    public:
        //void Print
         Find_max[i];
         /*Find_min
         Num_even/odd
         Search
         Is_sorted*/
    private:

};

ArrayTools::Find_max[i]{
    
}


int main(){

    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin<<myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}