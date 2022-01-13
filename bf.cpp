#include<iostream>
using namespace std;
void matchstick();
void matchstick(){
    int matchstick=21,userChoice,computerChoice;
    while(matchstick>0){
        in:
        cout<<"How many matchsticks you want to pick?"<<endl;
        cout<<"Enter the number between 1 to 4:";
        cin>>userChoice;
        if(userChoice==0 || userChoice>4){
        cout<<endl<<"Invalid input"<<endl;
        goto in;
        }
        computerChoice=5-userChoice;
        cout<<"Computer has picked "<<computerChoice<<" matchsticks."<<endl;
        matchstick=matchstick-5;
        cout<<"Now "<<matchstick<<" matchsticks are left."<<endl;
        if(matchstick==1){
            cout<<"You lose"<<endl;
            cout<<"Do you want to continue(y/n):";
            char ch;
            cin>>ch;
            if(ch=='y'){
                matchstick=21;
                goto in;
            }
            else{
                break;
            }
        }
      }
}
int main(){
    matchstick();
    return 0;
}