#include <iostream>

using namespace std;

int main() {

    int choiceMain,choiceMenu, choiceSize, quantity, basePrice, initialTotal, finalTotal = 0;
    char recurse;
    string nameOfOrder, nameOfSize;
    
    cout << "Coffee Shop\n\n";
    
    cout << "1. View Menu\n";
    cout << "2. Exit\n";
    cin >> choiceMain;
    
    
    switch(choiceMain){
        while(recurse == 'y' || recurse == 'Y'){
        case 1:
            cout << "\n\nMenu \n\n";
            cout << "1. French Vanilla ... P165.00\n";
            cout << "2. Frappucinno ...... P145.00\n";
            cout << "3. Cafe Americano ... P130.00\n";
            
            cin >> choiceMenu;
            
            if(choiceMenu == 1){
                basePrice = 165;
                nameOfOrder = "French Vanilla";
            }
            else if(choiceMenu == 2){
                basePrice = 145;
                nameOfOrder = "Frappucinno";
            }
            else if(choiceMenu == 3){
                basePrice = 130;
                nameOfOrder = "Cafe Americano";
            }
            else{
                cout << "\nEnter Correct Value";
                    return 0;
            }
  
            cout << "\n\nChoose Size\n\n";
            cout << "1. Small\n";
            cout << "2. Medium + P10.00\n";
            cout << "3. Large + P20.00\n";
            cin >> choiceSize;
            
            cout << "\n\nQuantity: ";
            cin >> quantity;
            
            if(choiceSize == 1){
                initialTotal = basePrice*quantity;
                nameOfSize = "Small";
            }
            else if(choiceSize == 2){
                initialTotal = (basePrice + 10)*quantity;
                nameOfSize = "Medium";
            }
            else if(choiceSize == 3){
                initialTotal = (basePrice + 20)*quantity;
                nameOfSize = "Large";
            }
            else{
                cout << "\nEnter Correct Value";
            }
            
            cout << "\nOrder: \n";
            cout << quantity << "pcs of " << nameOfSize << " " << nameOfOrder << endl;

            finalTotal+= initialTotal;
            
            cout << "\nTotal: " << "P" << initialTotal << ".00";
            cout << "\nDo you want to order again? (y/n): ";
            cin >> recurse;
            
        }    
            cout << "\nTotal: " << "P" << finalTotal << ".00";
            cout << "\n\nThank You For Ordering :)";
        break;
        
        case 2: 
            cout <<"\nThank You :)";
            return 0;
        break;
    }

    return 0;
}
