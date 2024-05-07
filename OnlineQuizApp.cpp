#include<iostream>
using namespace std;
int main(){
	int finalResult=0;
	char playAgain;
	int PlayQuiz(void);
	play:
	finalResult=PlayQuiz();
	cout<<"You score is "<<finalResult<<endl;
	if(finalResult>6){
		cout<<"You are Passed in the Quiz."<<endl;
		cout<<"Do you want to Play Again!! y or n"<<endl;
		cin>>playAgain;
		if(playAgain=='y'|| playAgain=='Y'){
		goto play;	
	}
	else{
		cout<<"Thank You for Playing!!!"<<endl;
	}
	}
	else{
		cout<<"Sorry!!!! You are failed in the exam.."<<endl;
		cout<<"Do you want to Play Again!! yes or no"<<endl;
		cin>>playAgain;
		if(playAgain=='y'|| playAgain=='Y'){
		goto play;	
	}
	else{
		cout<<"Thank You for Playing!!!"<<endl;
	}
	}
	return 0;
}

int PlayQuiz(){
	string name;
	cout<<"Enter your Name : ";
    getline(cin,name);
	char c;
	char option;
	int score=0;
	playinside:
    cout<<"Hello "<<name<<"."<<endl;
	cout<<"------Welcome to the World of Quiz------"<<endl;
	cout<<"-----Please follow the instructions------"<<endl;
	cout<<"step 1:Total 10 questions are in the Quiz"<<endl;
	cout<<"step 2:You will given 1 mark for each correct answer"<<endl;
	cout<<"step 3:There will be no negative marking."<<endl;
	cout<<"step 4:Enter s to start the quiz"<<endl;
	cout<<"step 5:Please select option a,b,c,d"<<endl;
	cout<<"step 6: If you score more than 6 then you are pass."<<endl;
	cin>>c;
	if(c=='s'|| c=='S'){
		cout<<"Q1. What is capital of India?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Kolkota (d)chennai"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score++;
		}
		else {
			score=score;
		}
		
		cout<<"Q2. What is capital of West Bengal?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Kolkota (d)chennai"<<endl;
		cin>>option;
		if(option=='c'|| option=='C'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q3. What is capital of TamilNadu?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Kolkota (d)chennai"<<endl;
		cin>>option;
		if(option=='d'|| option=='D'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q4. What is capital of Maharastra?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Kolkota (d)chennai"<<endl;
		cin>>option;
		if(option=='b'|| option=='B'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q5. What is capital of Odisha?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Bhubaneswar (d)chennai"<<endl;
		cin>>option;
		if(option=='c'|| option=='C'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q6. Who is the Prime minister of India?"<<endl;
		cout<<"(a)Narendra Modi (b)Rahul Gandhi (c)Kejriwal (d)Draupadi Murmu"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q7. What is national Animal of India?"<<endl;
		cout<<"(a)Dog (b)Tiger (c)Lion (d)Elephent"<<endl;
		cin>>option;
		if(option=='b'|| option=='B'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q8. What is the national Bird of India?"<<endl;
		cout<<"(a)peocock (b)pigeon (c)crow (d)Eagle"<<endl;
		cin>>option;
		if(option=='a'|| option=='A'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q9. What is capital of Haryana?"<<endl;
		cout<<"(a)Delhi (b)Mumbai (c)Kolkota (d)chandigarh"<<endl;
		cin>>option;
		if(option=='d'|| option=='D'){
			score++;
		}
		else {
			score=score;
		}
		cout<<"Q10. Who sings 'Ye dil hai mushkil' song?"<<endl;
		cout<<"(a)Yo Yo Honey Singh (b)Arijit Singh (c)Sonu Nigam (d)Udit Narayan"<<endl;
		cin>>option;
		if(option=='b'|| option=='B'){
			score++;
		}
		else {
			score=score;
		}
	}
	else {
		cout<<"You have entered a wrong button,For quiz Please enter s"<<endl;
		goto playinside;
	}
	
	return score;
}
