#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <limits>
using namespace std;
string dis_input ="===Anda salah memasukan input, masukan input yang benar===";
string nama_hari_in[] = {"Ahad", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at", "Sabtu"};
string nama_bulan[] = {" ", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober","November", "Desember"};
string nama_hari_out;
char in, out;
long int  y_in, m_in, mday_in, h_in, min_in, sec_in, wday_in, hari_dalam_sebulan;
long int tahun_inI, bulan_inI, hari_inI, jam_inI, menit_inI, detik_inI;
long int bulan_inII, hari_inII, jam_inII, menit_inII, detik_inII;
long int bulan_outI, hari_outI, jam_outI, menit_outI, detik_outI;
int main(){
    system("cls");
    while(true){
        time_t rawtime;
        tm * timeinfo;
        time (&rawtime);
        timeinfo = localtime( &rawtime);
        y_in=timeinfo->tm_year;
        m_in=timeinfo->tm_mon;
        mday_in=timeinfo->tm_mday;
        h_in=timeinfo->tm_hour;
        min_in=timeinfo->tm_min;
        sec_in=timeinfo->tm_sec;
        wday_in=timeinfo->tm_wday;
        cout << "====Selamat datang di penghitung waktu====\nProgram ini digunakan untuk menghitung waktu dari waktu sekarang sesuai yang diinput oleh pengguna\nkemudian kewaktu akan datang sesuai yang diinput oleh pengguna\n\nSilahkan masukan waktu sekarang\nApakah anda ingin memasukan waktu sekarang secara otomatis? ketik 'y' jika ingin, ketik 't' jika tidak : ";
        cin >> in;
        if(in == 't'){
            while(true){
                cout << "Tahun ke  : "; //inputTahun1
                if(cin >> tahun_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            while(true){
                cout << "Bulan ke  : "; //inputTahun1
                if(cin >> bulan_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            while(true){
                cout << "Hari ke   : "; //inputTahun1
                if(cin >> hari_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            while(true){
                cout << "Jam       : "; //inputTahun1
                if(cin >> jam_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            while(true){
                cout << "Menit     : "; //inputTahun1
                if(cin >> menit_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }
            while(true){
                cout << "Detik     : "; //inputTahun1
                if(cin >> detik_inI){
                    break;
                }else{
                    cout << dis_input << "\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

            }
        }
        if(in == 'y'){
            cout << "Tahun ke : " << y_in + 1900 << endl;
            tahun_inI = y_in + 1900;
            cout << "Bulan ke : " << setfill('0') << setw(2) << m_in+1 << " (" << nama_bulan[m_in+1] << ")"<< endl;
            bulan_inI = m_in+1;
            cout << "Hari ke  : " << setfill('0') << setw(2) << mday_in << " (" << nama_hari_in[wday_in] << ")" << endl;
            hari_inI = mday_in;
            cout << "jam      : " << setfill('0') << setw(2) << h_in << endl;
            jam_inI = h_in;
            cout << "Menit    : " << setfill('0') << setw(2) << min_in << endl;
            menit_inI = min_in;
            cout << "Detik    : " << setfill('0') << setw(2) << sec_in << endl;
            detik_inI = sec_in;
        }
        cout << "\nSilahkan masukan waktu yang akan di tambahkan/waktu yang akan di hitung kedepan\n";
        while(true){
            cout << "Bulan : ";
            if(cin >> bulan_inII){
                break;
            }else{
                cout << dis_input << "\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        while(true){
            cout << "Hari  : ";
            if(cin >> hari_inII){
                break;
            }else{
                cout << dis_input << "\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        while(true){
            cout << "Jam   : ";
            if(cin >> jam_inII){
                break;
            }else{
                cout << dis_input << "\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        while(true){
            cout << "Menit : ";
            if(cin >> menit_inII){
                break;
            }else{
                cout << dis_input << "\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        while(true){
            cout << "Detik : ";
            if(cin >> detik_inII){
                break;
            }else{
                cout << dis_input << "\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
        //proses
        bulan_outI = bulan_inI + bulan_inII;
        hari_outI = hari_inI + hari_inII;
        jam_outI = jam_inI + jam_inII;
        menit_outI = menit_inI + menit_inII;
        detik_outI = detik_inI + detik_inII;
        //nama hari
        if(bulan_inI < 3){
            bulan_inI += 12;
            tahun_inI -= 1;
        }
        int kI = tahun_inI % 100;
        int jI = tahun_inI / 100;
        int x = ((((hari_inI + 13*(bulan_inI+1)/5+kI+kI/4+jI/4+5*jI) % 7) +6) %7) + (hari_inII %7);
        if(x >= 7){
         nama_hari_out = nama_hari_in[x-7];
        }else{
         nama_hari_out = nama_hari_in[x];
        }
        //
        do{
            if(detik_outI >= 60){
                menit_outI += 1;
                detik_outI = detik_outI - 60;
            }
        }while(detik_outI >= 60);
        //
        do{
            if(menit_outI >= 60){
                jam_outI += 1;
                menit_outI = menit_outI - 60;
            }
        }while(menit_outI >= 60);
        //
        while(true){
            if(jam_outI >= 24){
                int local_scope = 24-jam_inI;
                jam_outI = abs(jam_outI-jam_inI);
                jam_outI = (jam_outI - local_scope);
            }
            if(jam_outI > 24){
                continue;
            }else if(jam_outI <= 23){
                break;
            }
        }
        //
        while(true){
            if(bulan_outI > 12){
                bulan_outI -=12;
                tahun_inI += 1;
            }
            if(bulan_outI > 12){
                continue;
            }else if(bulan_outI <=12){
                break;
            }
        }
           // cout << "debug tes -1 : " << ganti_tahun << " " << bulan_outI << " " << hari_dalam_sebulan << " " << hari_outI <<  endl;
       while(true){// Menghi
        if(bulan_outI == 1 or bulan_outI == 3 or bulan_outI == 5 or bulan_outI == 7 or bulan_outI == 8  or bulan_outI == 10 or bulan_outI == 12){
            hari_dalam_sebulan = 31;
        }
        if(bulan_outI == 4 or bulan_outI == 6 or bulan_outI == 9 or bulan_outI == 11){
            hari_dalam_sebulan = 30;
        }
        if(bulan_outI == 2){
           if((tahun_inI%4) == 0){
              hari_dalam_sebulan = 29;
            }else{
              hari_dalam_sebulan = 28;
            }
           if((tahun_inI%100) == 0){
              hari_dalam_sebulan = 28;
            }
           if((tahun_inI%400) == 0){
               hari_dalam_sebulan = 29;
            }
        }
        if(hari_outI >= hari_dalam_sebulan and hari_outI != hari_dalam_sebulan ){
            if(bulan_outI == 13 and hari_outI >= 31){
                tahun_inI++;
                bulan_outI -= 12;
            }
            //cout << "debug tes -1 : " << ganti_tahun << " " << bulan_outI << " " << hari_dalam_sebulan << " " << hari_outI <<  " " << tahun_inI <<endl;
            hari_outI = hari_outI - hari_dalam_sebulan;
            bulan_outI+=1;
            }     
            if(hari_outI>=hari_dalam_sebulan and hari_outI != hari_dalam_sebulan ){
                continue;
            }else if(hari_outI <= hari_dalam_sebulan){
                break;
            }
       }
       //
       if(detik_outI == 60){
            detik_outI = 0;
       }
       if(menit_outI == 60){
            menit_outI = 0;
       }
       if(jam_outI == 24){
            jam_outI = 0;
       }
       //
       cout << "Waktu yang akan datang adalah = " << "Tahun ke : " << tahun_inI <<", Bulan ke " << setfill('0') << setw(2) << bulan_outI <<" (" << nama_bulan[bulan_outI] << ")" << ", Hari ke " << setfill('0') << setw(2) << hari_outI << " ("<< nama_hari_out << ")"<<", Jam ke " << setfill('0') << setw(2) << jam_outI << ", Menit ke " << setfill('0') << setw(2) << menit_outI << ", Detik ke " << setfill('0') << setw(2) << detik_outI << endl;
       cout << "Apakah anda ingin mengulangi/atau menghitung lagi? ketik 'y' atau 'Y' jika ingin, ketik 't' atau 'T' jika tidak : ";
       cin >> out;
       if(out == 'y' or out == 'Y'){
            system("cls");
            continue;
       }else if(out == 't' or out == 'T'){
            break;
       }
    }
    return 0;
}