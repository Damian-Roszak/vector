struct Pozycja {
	string nazwisko;
	int numer;
};

vector<Pozycja> książka_tel (1000);

void drukuj_pozycję (int i)
{
	cout << książka_tel[i].nazwisko << ' ' << książka_tel[i].numer << '\n';
}

void dodaj_pozycję(int n)
{
	książka_tel.resize(książka_tel.size() + n);
}

//vector<Pozycja> książka(1000); =wektor z 1000elementów
// vector<Pozycja> książki[1000]; =1000 pustych wektorów