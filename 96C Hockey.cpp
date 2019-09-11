#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<string> v, v1;
    for(int i=0;i<x;i++){
        string p;
        cin>>p;
        v.push_back(p);
        v1.push_back(p);
    }
    string name;
    char letter;
    cin>>name>>letter;
    string nt,change;
    nt=name;
    change=name;
    for(int i=0;i<nt.length();i++){
        if(nt[i]<97) nt[i]=nt[i]+32;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<v1[i].length();j++){
            if(v1[i][j]<97) v1[i][j]=v1[i][j]+32;
        }
    }
    char next;
    for(int i=97;i<97+26;i++){
        if(i!=letter) {next=i; break;}
    }
    //cout<<next<<endl;
    for(int i=0;i<nt.length();i++){
        for(int j=0;j<x;j++){
            if(i+v1[j].length()<=nt.length()&&nt.substr(i,v1[j].length())==v1[j]){
                //cout<<nt.substr(i,v1[j].length())<<endl;
                for(int k=i;k<v[j].length()+i;k++){
                    if(name[k]<97&&nt[k]!=letter){
                        if(letter<97) change[k]=letter;
                        else change[k]=letter-32;
                    }
                    else if(name[k]<97&&nt[k]==letter){
                            //cout<<next<<endl;
                        if(letter<97) {change[k]=next;}
                        else change[k]=next-32;
                    }
                    else if(name[k]>=97&&nt[k]!=letter){
                        if(letter>=97) change[k]=letter;
                        else change[k]=letter+32;
                    }
                    else if(name[k]>=97&&nt[k]==letter){
                        if(letter>=97) change[k]=next;
                        else change[k]=next+32;
                    }
                }
            }
        }
    }
    cout<<change<<endl;
}
