
#include <iostream>
using namespace std;
int deci;
string hexa;
int usr =0;
void decToHexa(int deci) { cout <<"Output: "<<hex << deci << endl; }
int HexToDec(string hexa) { return stoi(hexa, 0, 16); }



int main()
{
    while(usr==0){
        cout <<"DEZ to HEX = 1 // HEX to DEZ = 2 // return = 0"<<endl; 
        cin >> usr;
        if(usr==1){
            while(usr==1){
                cout<<"Input: ";
                cin >> deci;
                if(deci==0){
                    usr=0;
                }
                decToHexa(deci);
            }}

        else if(usr==2){
            while(usr==2){
                cout<<"Input: ";
                cin >> hexa;
                if(hexa=="0"){
                    usr=0;
                }
                cout<<"Output: "<< HexToDec(hexa)<<endl;
            }}
    }}

