#include<bits/stdc++.h>
#include<cstdlib> 
using namespace std;
 

void rules();
 
int main()
{
    string playerName;
    int amount; 
    int bt; 
    int guess;
    int dice; 
    char choice; 
    srand(time(0)); 
    cout << "\n\n\n\t\t\t\tCASINO GAME\n\n\n\n"; 
    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName); 
    cout << "\n\nEnter Deposit amount to play game : Rs.";
    cin >> amount;
    
    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is Rs. " << amount << "\n";		
        do
        {
            cout <<"\n"<<playerName<<", enter money to bet : Rs. ";
            cin >> bt;
            if(bt > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bt > amount);		
        do
        {
            cout << "Guess your number to bet between 1 to 10 : ";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10); 
        dice = rand()%10 + 1;    
        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won Rs. " << bt * 10;
            amount = amount + bt * 10;
        }
        else
        {
            cout << "\nBad Luck this time !! You lost Rs. "<< bt <<"\n";
            amount = amount - bt;
        } 
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have Rs. " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\nDo you want to try your luck again (y/n)? ";		
        cin >> choice;
    }while(choice =='Y'|| choice=='y');    
    cout << "\n\n\n";
    cout << "\n\nThanks for playing. Your balance amount is Rs. " << amount << "\n\n"; 
    return 0;
}
 
 
void rules()
{
    system("cls");
    cout << "\n\n"; 
    cout << "\t\t\tRULES OF THE GAME\n"; 
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
 
}
