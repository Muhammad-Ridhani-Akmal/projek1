#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
#include <limits>
using namespace std;
int h, i, j, k, l, m, n, o, p, q, s, t, u, v, w, x, y, z, zz, hais, hh, nn, ta, ha, bu, de, ja, me, hg;
char r, zw;
string we = "===Anda salah memasukan input, masukan input yang benar===";
int main(){
    system("cls");
    while(true){
time_t rawtime;
 tm * timeinfo;
 //
 time (&rawtime);
 timeinfo = localtime( &rawtime);
 ta=timeinfo->tm_year;
 bu=timeinfo->tm_mon;
 ha=timeinfo->tm_mday;
 ja=timeinfo->tm_hour;
 me=timeinfo->tm_min;
 de=timeinfo->tm_sec;
 hg=timeinfo->tm_wday;
cout << "====Selamat datang di penghitung waktu====\nProgram ini digunakan untuk menghitung waktu dari waktu sekarang sesuai yang diinput oleh pengguna\nkemudian kewaktu akan datang sesuai yang diinput oleh pengguna\n\nSilahkan masukan waktu sekarang\nApakah anda ingin memasukan waktu sekarang secara otomatis? ketik 'y' jika ingin, ketik 't' jika tidak : ";
cin >> zw;
if(zw == 't'){
while(true){
cout << "Tahun ke : ";//inputTahunI
if(cin >> z){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
while(true){
cout << "Bulan ke : ";//inputBulanI
if(cin >> v){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
while(true){
cout << "Hari ke  : ";//inputHariI
if(cin >> s){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
while(true){
cout << "Jam      : ";//inputJamI
if(cin >> h){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
while(true){
cout << "Menit    : ";//inputMenitI
if(cin >> i){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
while(true){
cout << "Detik    : ";//inputDetikI
if(cin >> j){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}}
}
if(zw == 'y'){
cout << "Tahun ke : " << ta + 1900 << endl;
z = ta + 1900;
cout << "Bulan ke : "<< setfill('0') << setw(2)  << bu+1 << endl;
v = bu+1;
cout << "Hari ke  : "<< setfill('0') << setw(2)  << ha << endl;
s = ha;
cout << "Jam      : "<< setfill('0') << setw(2)  << ja << endl;
h = ja;
cout << "Menit    : "<< setfill('0') << setw(2)  << me << endl;
i = me;
cout << "Detik    : "<< setfill('0') << setw(2)  << de << endl;
j = de;
}
cout << "\nSilahkan masukan waktu yang akan di tambahkan/waktu yang akan di hitung kedepan\n";
while(true){
cout << "Bulan : ";//inputBulanII
if(cin >> w){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}
while(true){
cout << "Hari  : "; //inputHariII
if(cin >> t){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}
while(true){
cout << "Jam   : "; //inputJamII
if(cin >> k){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}
while(true){
cout << "Menit : "; //inputMenitII
if(cin >> l){
    break;
}else{
    cout << we <<"\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}
while(true){
cout << "Detik : ";//inputDetikII
if(cin >> m){
    break;
}else{
    cout << we << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}
//
y = v + w;//Hasilbulan(y)
u = s + t;//HasilHari(u)
n = h + k;//HasiJam(n)
o = i + l;//HasilMenit(o)
p = j + m;//HasilDetik(p)
//
do{//jika HasilDetik(p) >= 60 maka HasilMenit(o) + 1, HasilDetik(p) - 60
    if(p >= 60){
        o += 1;
        p = p - 60;
    }
}while(p >= 60);//jika HasilDetik(p) lebih besar/samadengan 60 maka looping stop
//
do{//menit
if(o >= 60){
    n += 1;
    o = o - 60;
    }
}while(o >= 60);
//
while(true){
if(n >= 24){//jam
    u+=1;
    q = 24 - h;
    n = abs(n - h);
    n = (n-q) + 0;
    }
    if (n > 24){
        continue;
    }else if(n <= 23){
        break;
    }
}
while(true){
    if(y > 12){// jika bulan(y) > 12, maka bulan di kurang 12,tahun(z) tambah = 1
    y -= 12;
    z++;
    }
    if(y > 12){
        continue;
    }else if(y <= 12){
        break;
    }
}
switch(y){
    case 0:case 2:case 4:case 6:case 7 :case 9:case 11:case 12:
    hh = 31;
    break;
    case 3: case 5: case 8: case 10:
    hh = 30;
    break;
    case 1:
    if((z%4) == 0){
    hh = 29;
    }
    else{
    hh = 28;
    }
    if((z% 100)==0){
               hh = 28;
        }
    if((z%400)==0){
               hh = 29;
        }
}
while(true){
    if(y == 0 or y == 2 or y == 4 or y == 6 or y == 7 or y == 9 or y == 11){//jika bulan = 1/3/5/7/8/10/12 maka hari akhir bulan(hh) = 31
    hh = 31;
}
if(y == 3 or y == 5 or y == 8 or y == 10){//jika bulan = 4/6/9/11 maka hari akhir bulan(hh) = 31
    hh = 30;
}
if(y == 1){
    if((z%4) == 0){
    hh = 29;
    }
    else{
    hh = 28;
    }
    if((z% 100)==0){
               hh = 28;
        }
    if((z%400)==0){
               hh = 29;
        }
}
if(u > hh){
    if(y == 12 and u >= 31){
        z++;
        y -= 12;
    }
    hais = hh - s;
    u = u - s;
    u = (u-hais);
    y+=1;
    }
    if(u > hh){
       continue;
    }else if(u <= hh){
        break;
    }

}
if(p == 60){//detik
    p = 0;
}
if(o == 60){//menit
    o = 0;
}
if(n == 24){//jam
    n = 0;
}
cout << "Waktu yang akan datang adalah = " << "tahun ke : " << z <<", bulan ke " << setfill('0') << setw(2) <<  y << ", hari ke " << setfill('0') << setw(2) << u << ", jam ke " << setfill('0') << setw(2) << n << ", menit ke " << setfill('0') << setw(2) << o << ", detik ke " << setfill('0') << setw(2) << p << endl;
cout << "Apakah anda ingin mengulangi/atau menghitung lagi? ketik 'y' jika ingin, ketik 't' jika tidak : ";
cin >> r;
if(r == 'y'){
    system("cls");
    continue;
}else if(r == 't'){
    break;
}
    }
    return 0;
}