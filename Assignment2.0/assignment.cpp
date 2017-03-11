//Daniel Vega
// March 9th 2017
//Program will convert inches to feet, yards and miles
# include <iostream>
using namespace std;

class DistanceConverter {
    public:
        void   SetDistFromInches (double numInches);
        void   SetDistFromFeet   (double numFeet);
        void   SetDistFromYards  (double numYards);
        void   SetDistFromMiles  (double numMiles);
        double GetDistFromInches ();
        double GetDistAsFeet     ();
        double GetDistAsYards    ();
        double GetDistAsMiles    ();
        double PrintDistance     ();
        DistanceConverter        ();
        DistanceConverter        (double numInches);
    private:
        double distInches_;
        
};

//Default Constructor
DistanceConverter::DistanceConverter() {
     distInches_ = 1;
}
//Second constructor
DistanceConverter::DistanceConverter(double numInches){
    distInches_ = numInches;
}

//Accepts and stores inches value
void DistanceConverter::SetDistFromInches(double numInches){
    distInches_ = numInches;
}
    
//Accepts feet value and converts to inches
void DistanceConverter::SetDistFromFeet(double numFeet){
    distInches_ = numFeet;
}

//Accepts yard value and converts to inches
void DistanceConverter::SetDistFromYards(double numYards){
    distInches_ = numYards;
}

//Accepts mile value and converts to inches
void DistanceConverter::SetDistFromMiles(double numMiles){
    distInches_ = numMiles;
}

//Set distance inches to inches, return inches
double DistanceConverter::GetDistFromInches(){
    return distInches_;
}

//solve for feet to inches
double DistanceConverter::GetDistAsFeet(){
    double feet = distInches_ * 0.08333333;
    return feet;
}

//solve for yards to inches
double DistanceConverter::GetDistAsYards(){
    double yards = distInches_ * 0.02777778;
    return yards;
}

//solve for miles to inches
double DistanceConverter::GetDistAsMiles(){
    double miles = distInches_ * 0.000015783;
    return miles;
}

//print function for DistanceConverter class with cout's
double DistanceConverter::PrintDistance(){
    cout << "Inches: " << GetDistFromInches() << endl;
    cout << "Feet: "   << GetDistAsFeet()     << endl;
    cout << "Yards: "  << GetDistAsYards()    << endl;
    cout << "Miles: "  << GetDistAsMiles()    << endl;
    cout << endl;
}


int main() {
    
    
    DistanceConverter dist1;        //default constructor
    DistanceConverter dist2(50);    //constructor overload
    
    dist1.PrintDistance();
    dist2.PrintDistance();
    
    //1 mile
    dist1.SetDistFromMiles(1);
    cout<<dist1.GetDistAsMiles()<<endl;
    dist1.PrintDistance();
    
    //16 feet
    dist2.SetDistFromFeet(16);
    cout<<dist2.GetDistAsFeet()<<endl;
    dist2.PrintDistance();
    
    //20 yards
    dist1.SetDistFromYards(20);
    cout<<dist1.GetDistAsYards()<<endl;
    dist1.PrintDistance();
    
    //100 inches
    dist2.SetDistFromInches(100);
    cout<<dist2.GetDistFromInches()<<endl;
    dist2.PrintDistance();
    
    return 0;
}
