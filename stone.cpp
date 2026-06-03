#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int start(){
   
    int index=rand()%3;
    return index;
}
void greet(){
    cout<<"stone,paper & scissor game"<<endl<<"let's start"<<endl;
}
string user(){
    string user_choice;
    int z=0;
    while(z==0){
        cout<<"enter your choice"<<endl;
        cin>>user_choice;
        for(int i=0;i<user_choice.length();i++){
        user_choice[i]=tolower(user_choice[i]);
        } 
        if(user_choice!="stone"&&user_choice!="paper"&&user_choice!="scissor"){
        cout<<"invalid choice"<<endl;
        }
        else{
            z=1;
        }
    }
       
    return user_choice;

}
void check(string choosen,string user_input){
    if(user_input=="stone"){
        if(choosen=="stone"){
            cout<<"tie"<<endl;
        }
        else if(choosen=="paper"){
            cout<<"loser"<<endl;
        }
        else
        cout<<"winner"<<endl;
    }
    else if(user_input=="paper"){
         if(choosen=="stone"){
             cout<<"winner"<<endl;
         }
         else if(choosen=="paper"){
             cout<<"tie"<<endl;
         }
         else
         cout<<"loser"<<endl;
    }
    else{
        if(choosen=="stone"){
             cout<<"loser"<<endl;
         }
         else if(choosen=="paper"){
             cout<<"winner"<<endl;
         }
         else
         cout<<"tie"<<endl;

    }


}
int wanna_play(){
    int playc;
    cout<<"play again"<<endl<<"0 to play again and 1 for exit"<<endl;
    cin>>playc;

    if(cin.fail()){
        cin.clear();
        cin.ignore(100000,'\n');
        cout<<"enter 0 and 1 only"<<endl;
        return wanna_play();
    }
    return playc;

}
int main(){
    string choice[3]={"stone","paper","scissor"};
     srand(time(0));
     greet();
     int play=0;
     string choosen;
     while(play==0){
         choosen=choice[start()];
    
    string user_input=user();
    check(choosen,user_input);
    cout<<"system chooses "<<choosen<<endl;
    play=wanna_play();

    while(play!=0 && play!=1){
        cout<<"invalid"<<endl;
        play=wanna_play();
    }
    
    
    }
    
    cout<<"THANKYOU"<<endl;


    
     

}















































/*in this when we type a string in cin function(where cin expects a int value ) it fails to handle this we now study a algo 
or we can say method 
if(cin.fail()){                               <--- check fails not
        cin.clear();                          <--- clear the state
        cin.ignore(100000,'\n');              <--- 100000-maximum no. of characters to stop,\n--where to stop
        cout<<"enter 0 and 1 only"<<endl;
        return wanna_play();
    }
*/