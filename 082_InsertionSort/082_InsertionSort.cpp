#include <iostream>
using namespace std;
int arr[12];
int n;

void input() { //prosedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array "; // Output ke layar
        cin >> n;    // input dari pengguna
        if (n <= 12) // jika n kurang dari atau sama dengan 12
            break;   // keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 12 elemen.\n"; // output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {            //looping dengan i dimulai dari 0 hingga n-1 
        cout << "Data ke-" << (i + 1) << ":";// output ke layar
        cin >> arr[i];                       // memasukan output dari pengguna
    }
}


void insertionsort() {
    //deklarasi variabel
    int i, temp, j;
    for (i = 1; i <= n - 1; i++) {//step 1
        temp = arr[i];//step 2
        j = i - 1;// step 3
        while (j >= 0 && arr[j] > temp)//step 4
        {
            arr[j + 1] = arr[j];//step 4a
            j = j - 1;//step 4b
        }
        arr[j + 1] = temp;//step 5
    }
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; //output setiap element array pada garis baru
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}




int main()
{

    input();
    insertionsort();
    display();
    system("pause");
    return 0;
}