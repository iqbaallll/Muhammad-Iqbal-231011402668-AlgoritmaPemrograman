#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menggabungkan dua array yang sudah terurut
vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    int i = 0, j = 0;

    // Bandingkan elemen dari kedua array
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Tambahkan sisa elemen dari array pertama jika ada
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }

    // Tambahkan sisa elemen dari array kedua jika ada
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    cout<<"Nama : Muhammad Iqbal"<<endl;
    cout<<"NIM : 231011402668"<<endl;
    cout<<"Kelas : 03TPLP026"<<endl;
    cout<<"-----------------------"<<endl;

    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> result = mergeSortedArrays(arr1, arr2);

    cout << "Array setelah digabung dan terurut: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
