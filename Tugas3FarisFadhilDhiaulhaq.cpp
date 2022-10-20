#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main(){
    //Variabel dengan Tipe data float untuk bilangan pecahan atau real
    //float dan double fungsinya sama, float 32-bit sedangkan double 64-bit
    float miring, alas, tinggi, hasil, praktik, nilUTS, nilUAS, hitung, nilaiI, nilaiV, nilaiR, nilaiB, nilaiX, nilaiC, rumus;

    int pilihan, pilihan2;
    //Biar gk ada yang nyalin codingan saya 🤣
    int antiCopy = 1, antiCopy2 = 2;

    //Nama dan Kelas saya
    if (antiCopy==1){
        cout<<"\n";
        cout<<"Nama: Faris Fadhil Dhiaulhaq\n";
        cout<<"Kelas: 1D Informatika\n";
        cout<<"\n";
        }
    cout<<"======== Soal Tugas 3 ========\n";
    cout<<"1. Menghitung sisi miring segitiga menggunakan rumus Phytagoras\n";
    cout<<"2. Menghitung nilai akhir Mahasiswa\n";
    cout<<"3. Menghitung Arus (I), Tegangan (V), dan Hambatan (R)\n";
    cout<<"4. Menghitung rumus yang ada di soal (Y =bx^2 + 0,5x - c)\n";
    cout<<"Pilihanmu: ";
    cin>>pilihan;

    if (pilihan==1 and antiCopy2==2){
        cout<<"===[ Menghitung sisi miring segitiga menggunakan rumus Phytagoras ]===\n";
        cout<<"=== Diketahui ===\n";
        cout<<"Sisi alas adalah = 8 cm\n";
        cout<<"Sisi tinggi adalah = 10 cm\n";
        cout<<"\n";
        alas = 8;
        tinggi = 10;
        //sqrt atau Square Roots berfungsi untuk mencari akar
        cout<<"=== Jawaban ===\n";
        miring = sqrt((alas*alas)+(tinggi*tinggi));

        cout<<"Hasilnya dalam bentuk desimal adalah: "<<miring<<"\n";
        //Saya menggunakan printf agar dapat menampilkan hasil yang telah dibulatkan
        printf("Hasilnya jika dibulatkan adalah %.lf\n",miring);
        cout<<"\n";
    }
    if (pilihan==2 and antiCopy2==2){
        cout<<"===[ Menghitung nilai akhir Mahasiswa ]===\n";
        cout<<"=== Diketahui ===\n";
        //Praktikum (20%)
        praktik = 75;
        praktik = praktik*0.2;
        cout<<"Nilai Praktikum  : "<<praktik<<endl;
        //UTS (30%)
        nilUTS = 70;
        nilUTS = nilUTS*0.3;
        cout<<"Nilai UTS        : "<<nilUTS<<endl;
        //UTS (50%)
        nilUAS = 88;
        nilUAS = nilUAS*0.5;
        cout<<"Nilai UAS        : "<<nilUAS<<endl;
        cout<<"\n";

        cout<<"=== Hasil ===\n";
        //Tinggal ditambahkan seluruh nilai yang sudah dihitung
        hitung = praktik+nilUTS+nilUAS;
        cout<<"Hasil akhir Mahasiswa tersebut adalah: "<<hitung<<endl;
        cout<<"\n";
    }
        //Pilihan nilai yang ingin dicari
    if (pilihan==3 and antiCopy2==2){

        cout<<"===[ Menghitung Arus (I), Tegangan (V), dan Hambatan (R) ]===\n";
        cout<<"Pilih nilai yang ingin dicari: \n";
        cout<<"1. Arus (I)\n";
        cout<<"2. Tegangan (V)\n";
        cout<<"3. Hambatan (R)\n";
        cout<<"Pilihan: ";
        cin>>pilihan2;
        //Arus (I)
        if (pilihan2==1 and antiCopy==1){
            cout<<"=== Menghitung Arus (I) ===\n";
            cout<<"Masukkan nilai V: ";
            cin>>nilaiV;
            cout<<"Masukkan nilai R: ";
            cin>>nilaiR;
            
            nilaiI = nilaiV/nilaiR;
            cout<<"=== Hasil ===\n";
            cout<<"Nilai Arus (I) adalah: "<<nilaiI<<endl;
        }
        //Tegangan (V)
        if (pilihan2==2 and antiCopy2==2){
            cout<<"=== Menghitung Tegangan (V) ===\n";
            cout<<"Masukkan nilai I: ";
            cin>>nilaiI;
            cout<<"Masukkan nilai R: ";
            cin>>nilaiR;
            
            nilaiV = nilaiI*nilaiR;
            cout<<"=== Hasil ===\n";
            cout<<"Nilai Tegangan (V) adalah: "<<nilaiV<<endl;
        }
        //Hambatan (R)
        if (pilihan2==3 and antiCopy==1){
            cout<<"=== Menghitung Hambatan (R) ===\n";
            cout<<"Masukkan nilai V: ";
            cin>>nilaiV;
            cout<<"Masukkan nilai I: ";
            cin>>nilaiI;
            
            nilaiR = nilaiV/nilaiI;
            cout<<"=== Hasil ===\n";
            cout<<"Nilai Tegangan (V) adalah: "<<nilaiR<<endl;
        }
        //Jika dipilih selain angka 1,2,3
        //Output akan menampilkan "Pilihannya hanya 1,2 dan 3!!"
        else if (pilihan<1||pilihan>3 and antiCopy2==2){
            cout<<"Pilihannya hanya 1,2 dan 3!!";
        }
    }
    if (pilihan==4 and antiCopy2==2){
        cout<<"=== Diketahui ===\n";
        cout<<"Nilai b = 25\n";
        nilaiB = 25;
        cout<<"Nilai x = 15\n";
        nilaiX = 15;
        cout<<"Nilai c = 20\n";
        nilaiC = 20;
        cout<<"\n";
        //Rumus
        rumus = (nilaiB*(nilaiX*nilaiX))+(0.5*nilaiX)-nilaiC;
        cout<<"=== Hasil ===\n";
        cout<<"Hasil dari nilai tersebut adalah: "<<rumus<<endl;
        }
    else if (pilihan<1||pilihan>4 and antiCopy2==2){
            cout<<"Pilihannya hanya 1,2, 3, dan 4!!";
    }
    return 0;
}
