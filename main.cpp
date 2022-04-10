#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Petla(string imie)
{
    int i=0;

    do {
        cout << imie << endl;
        i++;
    }
    while (i<10);
}
int DoLoop(int liczba){
    int a=1, b=0;
    int tab[liczba];
    for (int i=0; i<liczba; i++){
        tab[i]=a+b;
        a=b;
        b=tab[i];
        cout << "[" << i << "]= " << tab[i] << endl;
    }
}
int DuLup(int lup){
    int tab[lup];
    tab[0]=0;
    tab[1]=1;
    for(int i=1; i<=lup; i++){
        tab[i+1]=tab[i]+tab[i-1];
        cout << tab[i] << " ";
    }


}
int DoStrong(int str){
    int tab[str];
    int silnia=1;

    for (int i=1; i<=str; i++)
    {
        tab[i]=silnia*i;
        cout << tab[i] << endl;
    }

}
int DoStrong1(int range){
    int silnia=0;
    for(int i=0; i<range; i++){
        silnia=range*(range-1);

    }
    cout << silnia;
}
int DoSort()
{
    srand(time(NULL));
	int a[100];
	int b[100];
	int c;

	for (int x = 0; x < 100; x++)
    {
		a[x] = rand() % 100;
		cout << a[x] << endl;
	}

	cout << "TERA SORTOWANIE" << endl << endl << endl;

	for(int x = 0; x < 100; x++)
        for(int x = 0; x < 100; x++)
        {
            if (a[x] > a[x + 1])
            {
                c = a[x];
                a[x] = a[x + 1];
                a[x + 1] = c;
            }
        }
    for (int x = 0; x < 100; x++)
        cout << a[x] << endl;




}


int main()
{
    //DuLup(10);
    //DoStrong(5);
    //DoStrong1(5);
    //DoLoop(10);
    DoSort();
    return 0;

}
