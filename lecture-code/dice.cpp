#include <iostream>
#include <vector> //Just an array (container) ~ but it's stretchy.
                  //someVector.size() || someVector.at(1) 
                  //someVector.push_back(45) || someVector.pop_back()


// helper to implement diceRolls logic
void diceRollHelper(int dice, std::vector<int>& chosen);

// prints all possible outcomes of rolling the given
void diceRolls(int dice);

//create vector and call driver function
void diceRolls(int dice) { // dice = 1
    std::vector<int> chosen; // chosen = {1}
    diceRollHelper(dice, chosen);
}


void diceRollHelper(int dice, std::vector<int>& chosen) {

// Base Case
if (dice == 0) {

    //Print out contents of vector {1,1}
    std::cout << "{";
        for(int i=0; i < chosen.size(); i++){
            std::cout << chosen.at(i);
            if(i < chosen.size() -1){
                std::cout << ",";
            }
        } 
    std::cout << "} \n";
}

//Recursive case
else {

    for (int i = 1; i <= 6; i++) {
        chosen.push_back(i); // choose value 
        diceRollHelper(dice - 1, chosen); // explore the remaining dice 
        chosen.pop_back(); // un-choose chosen = {1, 2}
        }
    }
}

int main(){

    diceRolls(2);

return 0;
}