#include <iostream>
using namespace std;

class Osoba {
private:
    string imie;
    string nazwisko;

public:
    Osoba(string imie, string nazwisko) 
    : imie(imie), nazwisko(nazwisko) //lista inicjalizacyjna
    {
    }

    void Drukuj() const {
        cout << endl << "Imie i Nazwisko: " << imie << " " << nazwisko;
    }
};

class Pracownik: public Osoba {
private:
    string stanowisko;
    double placa;

public:
    Pracownik(string imie, string nazwisko, string stanowisko, double placa)
    : Osoba(imie, nazwisko), stanowisko(stanowisko), placa(placa)
    {
        //imie=_imie;
        //nazwisko=_nazwisko;
        //stanowisko=_stanowisko;
        //placa=_placa;
        //zamiast tego jest lista inicjalizacyjna, czyli to powyżej
    }
    
    void Drukuj() const {
        //cout<<endl<<"Imie i Nzawisko: "<<imie<<nazwisko;
        // to jest wywołanie funkcji Drukuj z klasy Osoba,
        // czyli wydrukowanie Imienia i Nazwiska Pracownika
        Osoba::Drukuj();
        cout << endl << "Stanowisko: " << stanowisko;
        cout << endl << "Placa: " << placa;
    }
};

int main() {
    cout << "Spotkanie 4";
    Pracownik p1("Adam", "Kot", "Kierownik", 6000);
    p1.Drukuj();
    return 0;
}
