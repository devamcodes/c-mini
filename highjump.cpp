/*scope:- create program that takes the input for high jumps of few athletes and try using arrays*/
#include<stdio.h>
#include<conio.h>
using namespace std;

int a1, a2, a3, athletes;

int main()
{
    int round1, round2, round3, finalscore, highscore3, highscore2, highscore1;


     a1;
        cout<<"enter the scores for athlete 1 in round 1 here:-";
        cin>>round1;
        cout<<"your input is:"<<round1<<endl;
        cout<<"enter the scores for athlete 1 round 2 here:-";
        cin>>round2;
        cout<<"your input is:"<<round2<<endl;
        cout<<"enter the scores for athlete 1 round 3 here:-";
        cin>>round3;
        cout<<"your input is:"<<round3<<endl;
        highscore1;
        if (round1> round2)
            if (round1>round3)
                cout<<"the high score for athlete one"<<" ="<<round1<<endl;
            else
                cout<<"the high score for athlete one"<<" ="<<round3<<endl;
        else
            if (round2>round3)
                cout<<"the high score for athlete one"<<" ="<<round2<<endl;
            else
                cout<<"the high score for athlete one"<<" ="<<round3<<endl;

    a2;

        cout<<"enter the scores for athlete 2 in round 1 here:-";
        cin>>round1;
        cout<<"your input is:"<<round1<<endl;
        cout<<"enter the scores for athlete 2 in round 2 here:-";
        cin>>round2;
        cout<<"your input is:"<<round2<<endl;
        cout<<"enter the scores for athlete 2 in round 3 here:-";
        cin>>round3;
        cout<<"your input is:"<<round3<<endl;
    highscore2;
        if (round1> round2)
            if (round1>round3)
                cout<<"the high score for athlete two"<<" ="<<round1<<endl;
            else
                cout<<"the high score for athlete two"<<" ="<<round3<<endl;
        else
            if (round2>round3)
                cout<<"the high score for athlete two"<<" ="<<round2<<endl;
            else
                cout<<"the high score for athlete two"<<" ="<<round3<<endl;

     a3;

        cout<<"enter the scores for athlete 3 in round 1 here:-";
        cin>>round1;
        cout<<"your input is:"<<round1<<endl;
        cout<<"enter the scores for athlete 3 in round 2 here:-";
        cin>>round2;
        cout<<"your input is:"<<round2<<endl;
        cout<<"enter the scores for athlete 3 in round 3 here:-";
        cin>>round3;
        cout<<"your input is:"<<round3<<endl;
     highscore3;
        if (round1> round2)
            if (round1>round3)
                cout<<"the high score for athlete three"<<" ="<<round1<<endl;
            else
                cout<<"the high score for athlete three"<<" ="<<round3<<endl;
        else
            if (round2>round3)
                cout<<"the high score for athlete three"<<" ="<<round2<<endl;
            else
                cout<<"the high score for athlete three"<<" ="<<round3<<endl;

    finalscore;//i don't know how to assign high score 1 the value of highest score of first athlete so it gives irrelevant value
        if (highscore1>highscore2)
            if (highscore1>highscore3)
                cout<<"the highest score is"<< highscore1<<" of athlete 1";
            else
                cout<<"the highest score is"<< highscore3<<" of athlete 3";
        else
            if (highscore2>highscore3)
                cout<<"the highest score is"<< highscore2<<" of athlete 2";
            else
                cout<<"the highest score is"<< highscore3<<" of athlete 3";


}
