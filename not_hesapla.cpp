#include<iostream>
#include<string>
/*
  Author: etoraman2
  Date: 17.10.15 15:03
  Description: 
*/

using namespace std;


void hrfNotu(int,int);
bool kontrolFonk(int,int);
void harf();
struct Dersler {

       float kredi;
       float harfNotu;
       string harf;
       int gecmeNotu;
       } ders;
       
int main () {
    bool kontrol;
    float derSayisi,topkredi=0;
    float topTNO = 0;
    int gecmeNotu,puan;
    cout << "Kac ders gireceksiniz ? : ";
    cin >> derSayisi;
    
    
    for (int i = 1;  i<= derSayisi; i++) {
        do {
        ders.harfNotu = 4;
        cout << endl << i << ". Dersin Gecme PUANI : ";
        cin >> ders.gecmeNotu;
        cout << i << ". Dersin PUANI: ";
        cin >> puan;
        cout << i << ". Dersin Kredisi : ";
        cin >> ders.kredi; 
        kontrol = kontrolFonk(ders.gecmeNotu,puan);
        if(!kontrol) { 
                     cout<< "Hata Yaptiniz Tekrar Girin.";
        }else {
              
              hrfNotu(ders.gecmeNotu,puan);
              harf();
              cout << endl << "Bu Dersin Harf NOTU : "<< ders.harf << endl;
        }
        
        } while (kontrol==false);
        topTNO = topTNO + (ders.harfNotu * ders.kredi );
        topkredi = topkredi + ders.kredi;

}

        float ortalama = topTNO/topkredi;
        cout << "Toplam Kredi : " << topkredi << endl <<"Kredi * HarfNotu : " << topTNO << endl << "TNO : " <<ortalama;
    system("pause");
    return 0;
}
bool kontrolFonk(int gecmeNotu, int puan){
     bool kontrol = true;
          if(!(gecmeNotu>=0 && gecmeNotu <=100 && puan>=0 && puan <=100)){
                          kontrol = false;
          }
          return kontrol;
     }
void hrfNotu(int gecmeNotu,int puan) {
          int altsinir = gecmeNotu ,ustsinir = gecmeNotu+30;               
          if(puan<ders.gecmeNotu){
                          ders.harfNotu = 0;
                          return;
          }
         if (puan >= ders.gecmeNotu+30 && puan <= 100) {
                ders.harfNotu = 4;
                return;
         }else if (puan >= altsinir && puan < ustsinir) {
               gecmeNotu-=5;
               ders.harfNotu -= 0.5;
               hrfNotu(gecmeNotu,puan);
         } 
}
void harf(){
     int a = ders.harfNotu * 10;
     switch (a) {
            case 0  : ders.harf = "FF"; break;
            case 10 : ders.harf = "DD"; break;
            case 15 : ders.harf = "DC"; break;
            case 20 : ders.harf = "CC"; break;
            case 25 : ders.harf = "CB"; break;
            case 30 : ders.harf = "BB"; break;
            case 35 : ders.harf = "BA"; break;
            case 40 : ders.harf = "AA"; break;   
            default : break;
     }
}
    
       
