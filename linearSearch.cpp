#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target)
            return i; // Elemen ditemukan
    }
    return -1; // Elemen tidak ditemukan
}

int main() {

    cout<<"Nama : Muhammad Iqbal"<<endl;
    cout<<"NIM : 231011402668"<<endl;
    cout<<"Kelas : 03TPLP026"<<endl;
    cout<<"-----------------------"<<endl;
    vector<int> unsortedArray = {3, 1, 5, 7, 9};
    int target = 5;

    int result = linearSearch(unsortedArray, target);
    if (result != -1)
        cout << "Elemen ditemukan pada indeks " << result << endl;
    else
        cout << "Elemen tidak ditemukan" << endl;

    return 0;
}
