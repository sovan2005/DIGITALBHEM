#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    string name;
    int inputuser;
    int times=0;
    int score=0;
    char input;
    cout<<"Enter your Name : ";
    getline(cin,name);
    cout<<"Hello "<<name<<"."<<endl;
    cout<<"Welcome to the World of Numbers."<<endl;
	cout<<"Please follow the given instructions:"<<endl;
	cout<<":-You have to guess a number between 1 to 10. "<<endl;
	cout<<":-If you want to play again, then press Y/N."<<endl;
	cout<<":-It's Your time to try your luck Now!!Go Ahead.."<<endl;
	play:
    srand(0);
    int variable=rand()%10+1;
    cout<<"Enter any number in between 1 to 10"<<endl;
    cin>>inputuser;
    times++;
    cout<<endl;
    if(inputuser==variable){
        cout<<"Congratulations! You guessed the correct number "<<endl;
        score++;
    }
    else{
	    cout<<"Sorry, your guess was wrong!!!"<<endl;
    }
    cout<< "Would you like to Try again?? Y/N"<<endl;
    cin>>input;
    cout<<endl;
    
    if(input=='Y'||input=='y'){
    	goto play;
    }
    else if(input=='N'||input=='n')	{
    cout<<"Your score is  "<<score<<" out of "<<times<<endl;
    cout<<"Game end.. "<<endl;
    cout<<"Thank You for Participating!!!!!Hope You Enjoyed.."<<endl;
	}	
	else{
		cout<<"You have entered a wrong button..Please enter Y/N "<<endl;
		goto play;
	}
    return 0;
}
















