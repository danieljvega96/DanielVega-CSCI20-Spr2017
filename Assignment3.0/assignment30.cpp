//Daniel Vega
//April 4th, 2017
//Rock, Paper, Scissors, Spock, Lizard game
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Score {
    public:
        void SetUserScore(int userScore);
        int  GetUserScore();
        void SetCompScore(int computerScore); 
        int  GetCompScore();
    private:
        int userScore_;
        int compScore_;
        
};
void Score::SetUserScore(int userScore) {
        userScore_ = userScore + 1;
    }
    
int Score::GetUserScore(){
     return userScore_;   
    }

void Score::SetCompScore(int computerScore){
        compScore_ = computerScore + 1;
    }

int Score::GetCompScore(){
    return compScore_;
}

int main(){
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int spock = 4;
    int lizard = 5;
    int userChoice = 0;
    int userScore = 0;
    int computerScore = 0;
    int computerChoice = 0;
    int numberOfGames = 0;
    int i = 0;
    
    cout <<"Welcome to Rock, Paper, Scissors, Spock, Lizard." << endl << endl;
    cout << "In this game, Scissors cuts Paper covers Rock crushes Lizard poisons Spock smashes" << endl;
    cout << "Scissors decapitates Lizard eats Paper disproves Spock vaporizes Rock crushes Scissors" << endl << endl;
    cout << "Press 3 for a best of 3 game, 5 for a best of 5 game, and 7 for a best of 7 game." << endl;
    cin >> numberOfGames;
    
    while (numberOfGames != 3 && numberOfGames != 5 && numberOfGames != 7){
        cout << "Please enter a valid choice." << endl;
        cin >> numberOfGames;
    }
    cout << endl;
    
    cout << "1. rock" << endl << "2. paper" << endl << "3. scissors" << endl << "4. spock" << endl << "5. lizard" << endl;
   
   while (userScore <= numberOfGames || computerScore <= numberOfGames){
   
   //for (i = 0; i < numberOfGames; ++i){
       
       cin >> userChoice;
    
    while (userChoice <= 0 || userChoice >= 6){
        cout << "Please enter a valid choice." << endl;
        cin >> userChoice;
    }
    
    if (userChoice == 1){
        cout << "User picked Rock" << endl;
    }
    
    else if (userChoice == 2){
        cout << "User picked Paper" << endl;
    }
    
    else if (userChoice == 3){
        cout << "User picked Scissors" << endl;
    }
    
    else if (userChoice == 4){
        cout << "User picked Spock" << endl;
    }
    
    else if (userChoice == 5){
        cout << "User picked Lizard" << endl;
    }
    
    cout << endl;
    
    srand(time(0));
    computerChoice = ((rand() % 5) + 1);
    
        if (computerChoice == 1){
        cout << "Computer picked Rock" << endl;
    }
    
    else if (computerChoice == 2){
        cout << "Computer picked Paper" << endl;
    }
    
    else if (computerChoice == 3){
        cout << "Computer picked Scissors" << endl;
    }
    
    else if (computerChoice == 4){
        cout << "Computer picked Spock" << endl;
    }
    
    else if (computerChoice == 5){
        cout << "Computer picked Lizard" << endl;
    }
    
    cout << endl;
    /*while (Score <= numberOfGames){
    }*/
    
    if ((userChoice == 1 && computerChoice == 1)||
        (userChoice == 2 && computerChoice == 2)||
        (userChoice == 3 && computerChoice == 3)||
        (userChoice == 4 && computerChoice == 4)||
        (userChoice == 5 && computerChoice == 5)){

        cout << "It's a draw!" << endl << endl;
        }
        
    else if ((userChoice == 1 && computerChoice == 4)||
            (userChoice == 1 && computerChoice == 3)||
            (userChoice == 2 && computerChoice == 1)||
            (userChoice == 2 && computerChoice == 5)||
            (userChoice == 3 && computerChoice == 2)||
            (userChoice == 3 && computerChoice == 5)||
            (userChoice == 4 && computerChoice == 4)||
            (userChoice == 4 && computerChoice == 2)||
            (userChoice == 5 && computerChoice == 3)||
            (userChoice == 5 && computerChoice == 1)){
            
            cout << "Sorry, the computer beat you!" << endl << endl;
            computerScore = computerScore + 1;
            }
            
    else if ((computerChoice == 1 && userChoice == 4)||
            (computerChoice == 1 && userChoice == 3)||
            (computerChoice == 2 && userChoice == 1)||
            (computerChoice == 2 && userChoice == 5)||
            (computerChoice == 3 && userChoice == 2)||
            (computerChoice == 3 && userChoice == 5)||
            (computerChoice == 4 && userChoice == 4)||
            (computerChoice == 4 && userChoice == 2)||
            (computerChoice == 5 && userChoice == 3)||
            (computerChoice == 5 && userChoice == 1)){
                
            cout << "Good job, you beat the computer!"<< endl <<endl;
            userScore = userScore + 1;
            }
   }
   
    cout << "Game was played " << numberOfGames << " times.";
    return 0;
}