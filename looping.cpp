#include <iostream>
#include <ctime>
using namespace std;

// ======================
// PERULANGAN
// ======================
void perulangan(){
    int x;

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

    cout<<"Bilangan acak while yang terakhir ="<<x<<endl;
    cout<<endl;

    cout<<"PERULANGAN DO...WHILE"<<endl;
    x = 1 + rand()%10;

    do{
        cout<<"Bilangan acak = "<<x<<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"Bilangan acak do-while yang terakhir ="<<x<<endl;
    cout<<endl;
}

// ======================
// LOGIKA NOT
// ======================
void logikaNot(){
    float nilB,nilm,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilm;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilm)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

// ======================
// LOGIKA OR
// ======================
void logikaOR(){
    float nilB,nilm,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilm;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilm)/2;

    if ((rerata >= 60) || (nilm >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

// ======================
// LOGIKA AND
// ======================
void logikaAND(){
    float nilB,nilm,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilm;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilm)/2;

    if ((rerata >= 60) && (nilm >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

int main(){
    perulangan();
    cout<<"\n====================\n";

    logikaNot();
    cout<<"\n====================\n";

    logikaOR();
    cout<<"\n====================\n";

    logikaAND();

    return 0;
}