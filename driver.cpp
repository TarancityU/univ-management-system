int main(){
    //initial conditions
    sb[2].setname("Engineering");
    sb[1].setname("Science");
    sb[0].setname("History");
     
    sb[0].setcnt(0);
    sb[1].setcnt(0);
    sb[2].setcnt(0);
     
    cout<<"Welcome to the University, what do you want to do?\n";
    cin>>option;
    while(option!='Q'){
        switch(option){
            case 'H':
                cout<<"Input the number of Professors:\n";
                cin>>n;
                cout<<"Input the information of Professors (name, birth_year, lectures_number, subject):\n";
                for(int i=0; i<n; i++){
                    string name, subj;
                    int year, num;
                    cin>>name>>year>>num>>subj;
                     
                    Professor temp;
                    temp.setname(name);
                    temp.setnum(num);
                    temp.setyear(year);
                     
                    
                    
                    sb[f(subj)].setl(temp, sb[f(subj)].cnt());
                    sb[f(subj)].setcnt(sb[f(subj)].cnt()+1);
                    
                    
                    sb[f(subj)].settotal(sb[f(subj)].total()+num);
                }
                for(int i=0; i<3; i++) sb[i].srt();
                cout<<"All Professors hired. ";
                break;
            case 'L':
                cout<<"Professors in the university:\n";
                for(int i=0; i<3; i++){
                    cout<<"Number of "<<sb[i].name()<<" lectures available: "<<sb[i].total()<<"\n";
                    for(int j=0; j<sb[i].cnt(); j++){
                        Professor temp=*(sb[i].l()+j);
                        cout<<temp.name()<<" "<<temp.birth_year()<<" "<<temp.num()<<"\n";
                    }
                }
                cout<<"All Professors listed. ";
                break;
            case 'A':
                if(sb[0].total()+sb[1].total()+sb[2].total()== 0){
                    cout<<"Input the name of the Professors you want to assign:\n";
                    string s;
                    cin>>s;
                    cout<<"All Professors are busy. ";
                }
                else{
                    cout<<"Input the name of the Professors you want to assign:\n";
                    string s;
                    int ii, jj;
                    bool start = 1;
                    do{
                        if(!start) cout<<"Sorry, the Professor is not available. Try again:\n";
                        cin>>s;
                        for(int i=0; i<3; i++){
                            for(int j=0; j<sb[i].cnt(); j++)
                                if( (*(sb[i].l()+j)).name() == s){
                                    ii=i;
                                    jj=j;
                                     
                                    i=3;
                                    break;
                                }
                        }
                        start = 0;
                    }while(! (*(sb[ii].l()+jj)).num());
                    (*(sb[ii].l()+jj)).setnum((*(sb[ii].l()+jj)).num()-1);
                    sb[ii].settotal(sb[ii].total()-1);
                    cout<<"Succeed! ";
                }
                break;
        }
         
        cout<<"What do you want to do next?\n";
        cin>>option;
    }
    cout<<"Have a nice day, bye!\n";
    return 0;
}
