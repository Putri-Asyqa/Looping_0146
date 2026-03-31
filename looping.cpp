#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    // ======================
    // PERULANGAN
    // ======================
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;

    srand(time(0));

    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }

    cout<<"Bilangan acak while terakhir = "<<x<<endl;
    cout<<endl;

    cout<<"PERULANGAN DO WHILE"<<endl;
    x = 1 + rand()%10;

    do{
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"Bilangan acak do-while terakhir = "<<x<<endl;

    cout<<"\n====================\n";

    // ======================
    // INPUT NILAI
    // ======================
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    // ======================
    // LOGIKA NOT
    // ======================
    if (!(rerata < 60))
        cout<<"Lulus (NOT)"<<endl;
    else
        cout<<"Tidak lulus (NOT)"<<endl;

    // ======================
    // LOGIKA OR
    // ======================
    if ((rerata >= 60) || (nilM >= 70))
        cout<<"Lulus (OR)"<<endl;
    else
        cout<<"Tidak lulus (OR)"<<endl;

    // ======================
    // LOGIKA AND
    // ======================
    if ((rerata >= 60) && (nilM >= 70))
        cout<<"Lulus (AND)"<<endl;
    else
        cout<<"Tidak lulus (AND)"<<endl;

    return 0;
}