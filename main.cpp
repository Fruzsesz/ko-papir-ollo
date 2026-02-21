#include <functional>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int pont =0;
int kor =0;
int ervenytelen =0;
string valasztas[3]={"ko","papir","ollo"};
void kinyer (int ellenseg,int sajat) {
    if (sajat ==1 ) {
        if (ellenseg ==1) {cout<<"Dontetlen lett";}
        else if (ellenseg ==2) {cout<<"Az ellenseg nyert";}
        else if (ellenseg ==3) {
            cout<<"Te nyertel";
            pont++;
        }
        else {
            cout<<"Ilyen lehetoseg nincs";
            ervenytelen++;
        }
    }
    else if (sajat ==2 ){
        if (ellenseg ==1) {
            cout<<"Te nyertel";
            pont++;
        }
        else if (ellenseg ==2) {cout<<"Dontetlen lett";}
        else if (ellenseg ==3) {cout<<"Az ellenseg nyert";}
        else {
            cout<<"ilyen lehetoseg nincs";
            ervenytelen++;
        }
    }
    else if (sajat ==3 ) {
        if (ellenseg ==1) {cout<<"Az ellenseg nyert";}
        else if (ellenseg ==2) {
            cout<<"Te nyertel";
            pont++;
        }
        else if (ellenseg ==3) {cout<<"Dontetlen lett";}
        else {
            cout<<"Ilyen lehetoseg nincs";
            ervenytelen++;
        }
    }
    else {
        cout<<"Ilyen lehetoseg nincs";
        ervenytelen++;
    }

}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    cout<<"\tUdvozollek  a ko papir ollo console jatekban"<<endl<<
    "\ttiz korig megy a jatek es a jatek vegen kirom a pontodat"<<endl;
    _sleep(3000);
    cout<<"\t \t \t  mehet?\n "<<endl;
        for (int i = 0; i <5;i++){
            kor++;
            cout<<kor<<". kor\t ";
            cout<<"Valassz egy opciot"<<endl<<" \t 1. ko"<<endl<<" \t 2. papir"<<endl<<" \t 3. ollo"<<endl;
            int Valasztassajat;
            srand(time(0));
            int Valasztasellenseg = (rand() % 3)+1;
            cin>>Valasztassajat;
            cout<<"a te valaszod :"<<valasztas[Valasztassajat - 1]<<endl;
            cout<<"a gep valasza : "<<valasztas[Valasztasellenseg-1]<<endl;
            kinyer(Valasztasellenseg, Valasztassajat);
            cout<<endl<<"pontszamod:  "<<pont<<endl;
            cout <<endl<<endl;


        }

    cout<<"jatek vege .\n vegso pontszamod: "<<pont <<" A tizbol"<<endl;
    cout <<ervenytelen<<" ervenytelen korod volt";

    _sleep(5000);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}