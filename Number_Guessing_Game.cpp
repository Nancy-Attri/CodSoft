#include<iostream> //for input and output operation
#include<cstdlib> //for srand() and rand()
#include<ctime> //for time()
using namespace std;
int main()
{   cout<<"Hey!!"<<endl;  
    cout<<"*******************Welcome to the NUMBER GUESSING GAME***************"<<endl;
    int num;
    int guess;
    int tries=0;
    
    srand(time(0));
    num= rand()%100 + 1 ;
    cout<<"         ***I chose a natural number between 1 and 100***"<<endl;
    // cout<<"         ***Are you ready guys?***"<<endl;
    cout<<"         ***Now, Let's start the game!!!***"<<endl;
    
    do
    { 
        cout<<"Enter a guess between 1 and 100 : ";
        cin>>guess;
        tries++;
        // cout<<endl;
        if (guess>num)
        {
            cout<<"         Sorry,Your guess is  high!"<<endl;
        }

        else if (guess<num)
        {
            cout<<"         Sorry,Your guess is  low!" <<endl ;       }
        else
        {
            cout<<"         Hurray!!!!Congratulations!!You make the correct guess!!"<<endl;
            cout<<"The correct number is : "<<num<<endl;
            cout<<"Number of tries you take for correct guess : "<<tries<<endl;
            cout<<endl;
        }
    
        
    } while (guess != num);

cout<<"************************END****************************";

    return 0;
    
    }