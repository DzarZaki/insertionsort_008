#include <iostream>
using namespace std;

int arr[20];                          // Membuat Array dengan panjang data 20
int n;                                // Membuat Variable inputan n

void input() {                        // Procedure Input
	while (true)
	{
		cout << "Masukan Jumlah Data pada Array : ";  // Membuat Inputan jumlah element Array
		cin >> n;                                     // Memanggil Variable inputan n
                                     
		if (n <= 20) {                               // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;                                 // Membuat jarak per baris program
	cout << "======================" << endl;    // Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)              // Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";  // Memasukkan atau menginputkan nilai data n 
		cin >> arr[i];                          // Menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() {                // Prosedure Insertionsort

	int temp;                         // Membuat variable data temporer atau penyimpanan sementara 
	int j;                            // Membuat variable j sebaggai penanda 

	for (int i = 1; i < n; i++) {     // Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];                // Simpan nilai arr[i] ke variable sementara temp
		j = i - 1;                    // Setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp) // Looping while dimana nilai j lebih besar sama dengan 0 dan 
			                            // arr[j] lebih besar darpada temp
		{
			arr[j + 1] = arr[j];          // simpan arr[j] ke dalam variable arr [j+1]
			j--;
		}
		arr[j + 1] = temp;              // simpan nilai temp ke dalam arr[j+1]

		cout << "\nStep " << i << ": ";            // output ke layar
		for (int k = 0; k < n; k++) {              // Looping nilai k dimulai dari 0 hingga n-1
			cout << " ";                           // Output ke layar
		}
	}
}

void display() {
	cout << endl;
	cout << "====================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
	insertionsort();
	display();
}


	