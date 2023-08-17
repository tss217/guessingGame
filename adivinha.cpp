
#include<iostream>
using namespace std;

int main(){
    cout<<"----------------------------"<<endl;
    cout<<"           welecome         "<<endl;
    cout<<"----------------------------"<<endl;

    const int NUMERO_SECRETO = 42;
    cout<<"secret number: "<< NUMERO_SECRETO<<" shhhhh!"<<endl;

    bool notSet = true;
    int attempts = 0;

    while (notSet){
        attempts++;
        cout << "attempts :"<< attempts << endl;
        
        int guess;
        cout<<"what is your guess?"<<endl;
        cin>>guess;

        cout<<"your guessing is : "<< guess<<endl;

        bool set = guess == NUMERO_SECRETO;
        bool high = guess > NUMERO_SECRETO;

        if(set){
            cout << "congratulations! you are rigth" << endl;
            notSet = false;
        }
        else if(high){
            cout<<"your guess was too high"<< endl;
        }
        else{
            cout<<"you guess was too low"<< endl;
        }

        
    }
    
    cout<<"END GAME"<<endl;
    cout<<"attemps:"<< attempts<<endl;

}