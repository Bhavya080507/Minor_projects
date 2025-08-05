#include <iostream>
using namespace std;

int main(){
    cout<<"\n";
    cout<<"\n";
    cout<<"  **Today we will be having a short quiz consisting of 5 simple questions on AI**\n ";
    
    cout<<"          Each correct answer gives you one point! \n";
    cout<<"\n";
    cout<<"press 1 if you are ready!\n";
    int a;
    cin>>a;
    if(a!=1){
        cout<<"You will still have to play ;)";
    }
    else{
        cout<<"LETS PLAY!!\n";
    }
    cout<<"You have to read the questions and type the number in front of the option you want to select.\n";
    int points=0;
    int one;
    cout<<"\n";
    cout<<"A)What is the full form of AI?\n";
    
    cout<<"1)America India\n";
    cout<<"2)Andaman islands\n";
    cout<<"3)Artifical intelligence\n";
    cout<<"4)App induction\n";
    cout<<"enter your answer:";
    cin>>one;
    if(one==3){
        cout<<"Correct,looks like your pretty smart!\n";
        cout<<"\n";
        points++;
    }
    else{
        cout<<"Wrong,the correct answer is option 3, better luck next time!\n";
        cout<<"\n";
    }
    cout<<"B)Which one of the following is not a part of AI domain?\n";
    
    cout<<"1)Programming\n";
    cout<<"2)Machine learning\n";
    cout<<"3)Data science\n";
    cout<<"4)Big data\n";
    cout<<"enter your answer:";
    cin>>one;
    if(one==1){
        cout<<"Correct,you are on the right track!\n";
        cout<<"\n";
        points++;
    }
    else{
        cout<<"Wrong,the correct answer is option 1, better luck next time!\n";
        cout<<"\n";
    }
    cout<<"C)Which of the following is not an genAI tool?\n";
    
    cout<<"1)ChatGPT\n";
    cout<<"2)BigJupiter\n";
    cout<<"3)Gemini\n";
    cout<<"4)Perplexity\n";
    cout<<"enter your answer:";
    cin>>one;
    if(one==2){
        cout<<"Correct,Congratulations!\n";
        cout<<"\n";
        points++;
    }
    else{
        cout<<"Wrong,the correct answer is option 2, better luck next time!\n";
        cout<<"\n";
    }
    cout<<"D)Which language is most commonly used to build AI programs?\n";
   
    cout<<"1)HTML\n";
    cout<<"2)JAVA\n";
    cout<<"3)C++\n";
    cout<<"4)Python\n";
    cout<<"enter your answer:";
    cin>>one;
    if(one==4){
        cout<<"Correct,you are on the right track!\n";
        cout<<"\n";
        points++;
    }
    else{
        cout<<"Wrong,the correct answer is option 4, better luck next time!\n";
        cout<<"\n";
    }
    cout<<"E)What is Machine learning?\n";
    
    cout<<"1)Teaching humans to fix machines\n";
    cout<<"2)Making machines watch YouTube videos\n";
    cout<<"3)Allowing machines to learn from data\n";
    cout<<"4)Giving machines a brain\n";
    cout<<"enter your answer:";
    cin>>one;
    if(one==3){
        cout<<"Correct,this was a tricky one!\n";
        cout<<"\n";
        points++;
    }
    else{
        cout<<"Wrong,the correct answer is option 3, better luck next time!\n";
        cout<<"\n";
    }
    cout<<"Congratulations on completing the quiz! You scored "<<points<<"/5"<<endl;
    cout<<"Before leaving please rate the quiz from 1-5:";
    cout<<"\n";
    cin>>one;
    if(one==5){
        cout<<"Thank you!, I knew you are smart ;)";
    }
    else{
        cout<<"Anything below 5 not allowed Hahahaha!\n";
        cout<<"You have one last chance to do the right thing and give a good rating\n";
        cout<<"please rate the quiz from 1-5:";
        cin>>one;
        cout<<"\n";
        cout<<"Good";
        
    }
    cout<<"            **GOODBYE**";
    cout<<"\n";
    cout<<"                       -bhavya";




}