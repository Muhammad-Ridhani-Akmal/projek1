#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int hari;
int bulan;
int tahun;
int in_tahun, inn_tahun, out_tahun;
int hari_dalam_sebulan;
string buslan[] = {"","Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober","November", "Desember"};
string bahalat[] = {"","      ","            " ,"                  ","                        ","                              ","                                    "};     
int main(){
    system("cls");
    cout << "Program C++ Menampilkan Kalender \n";
    cout << "Masukan Tahun : ";
    cin >> in_tahun;
    cout << "Sampai Tahun  : ";
    cin >> inn_tahun;
    out_tahun = inn_tahun - in_tahun;
    if(inn_tahun < in_tahun){
        out_tahun = 0;
    }
    for(int h = 0; h <= out_tahun; h++){
        cout << "-----------------------------------------\n";
        cout << "           Kalender Tahun "<< in_tahun <<"              \n" ;
        for(int i = 1; i <= 12; i++){
            bulan = i;
            tahun = in_tahun;
            switch (i) {
                case 1:case 3:case 5:case 7:case 8 :case 10:case 12:
                   hari_dalam_sebulan = 31;
                   break;
                case 4: case 6: case 9: case 11:
                    hari_dalam_sebulan = 30;
                    break;
                case 2:
                    if((tahun%4)==0){
                        hari_dalam_sebulan=29;
                    }else{
                        hari_dalam_sebulan=28;
                    }
                    if((tahun%100)==0){
                        hari_dalam_sebulan = 28;
                    }
                    if((tahun%400)==0){
                        hari_dalam_sebulan = 29;
                    }
                    break;
                default:
                    break;
            }
            cout << "-----------------------------------------\n";
            cout << "\t\t" <<buslan[i] << " " <<  i << " " <<in_tahun << endl;
            cout << "\e[31mAhad\e[0m\tSenin\tselasa\tRabu\tKamis\t\e[32mJum'at\e[0m\tSabtu" << endl;
            if(bulan < 3){
                bulan += 12;
                tahun -= 1;
            }
            int k = tahun % 100;
            int r = tahun / 100;
            for(int j = 1; j <= hari_dalam_sebulan;j++){
                int hasil =(((j + 13 * (bulan + 1)/5+k+k/4+r/4+5*r)%7)+6)%7;
                if(j == 1){
                    cout << bahalat[hasil];
                }
                if(j == 1){
                    cout << "\t";
                }
                if(hasil == 0){
                    cout << "\e[31m " << setfill('0') << setw(2) << j <<"\t\e[0m";
                }else if(hasil == 5){
                    cout << "\e[32m " << setfill('0') << setw(2) << j <<"\t\e[0m";
                }else{
                    cout << " " << setfill('0') << setw(2) << j <<"\t";
                }
                if(hasil == 6 and j != hari_dalam_sebulan){
                    cout << endl;
                }
                if(j == hari_dalam_sebulan){
                    cout << endl;
                }
            }
        }
        in_tahun++;
    }
    return 0;
}