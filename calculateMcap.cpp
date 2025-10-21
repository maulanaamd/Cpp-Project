#include <iostream>
#include <cmath>
using namespace std;


void line(){
    cout << "-----------------------------------------"<<endl;
}
int main(){

    line();
    cout << "|| Calculating Bitcoin Mcap 19 October ||"<<endl;
    line();

    // Deklarasi Variabel harga terbaru dan coin beredar
    double currentPrice;
    double circulatingSupply;



    // Assignment nilai ke dalam variabel

    currentPrice = 107.000;        // 107 usd harga bitcoin pada tanggal 19 Oktober
    circulatingSupply = 19.900000; // 19. 9 juta bitcoin yang beredar pada tanggal 19 Okktober 2025

    // rumus perhitungan 
    double marketCapFormula = currentPrice * circulatingSupply;
    cout << "Bitcoin Price : " << currentPrice << endl;
    cout << "Circulating Supply : " << circulatingSupply << endl;
    cout << "\nBase On data Above" << endl;
    cout <<"Current Market Cap of Bitcoin: " << floor(marketCapFormula) << " Billion USD" <<endl;

    return 0;
}
