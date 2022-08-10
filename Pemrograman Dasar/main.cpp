#include <iostream>

using namespace std;

float A[5];
int rataNilai(){ //function yang digunakan untuk mencari nilai rata - rata
    int i, sum = 0;
    double aver;
    for (i=1;i<=3;++i) {
      sum += A[i];
    }
    cout<<sum<<endl;
    aver = double(sum) / 3;
    return aver;
}

int nilai(){ //function yang digunakan untuk mencari nilai tertinggi dan nilai terendah
    int i;
    float max, min;
        max = A[0];
        for (i=1;i<=3;i++){
            if(i == 1){
                max = A[i];
                min = A[i];
            }
            else if(max < A[i]){
                max = A[i];
            }
            else if(min > A[i]){
                min = A[i];
            }
        }
        cout << "\nNilai terbesar adalah : " << max << endl;
        cout << "Nilai terkecil adalah : " << min << endl;
}

int main(){
    string nama;
    string kelas;
    string mapel;
    int kkm;
    cout<< "==========================="<<endl;
    cout<< "PROGRAM PENGOLAHAN NILAI"<<endl;
    cout<< "==========================="<<endl;
    cout<< "Nama : ";
    getline (cin, nama);
    cout<< "Kelas : ";
    getline (cin, kelas);
    cout<< "Mata Pelajaran : ";
    getline (cin, mapel);
    cout<< "Nilai KKM : ";
    cin>>kkm;
    cout<<endl;
    cout<<endl;
    cout<<"==========================="<<endl;
    for (int a=1;a<=3;a++) {
        cout<< "Nilai Praktek "<<a<< " : ";
        cin>>A[a];
        if(A[a]<=100){
            A[a];
        }
        else{
            cout<<"Nilai Tidak Boleh Lebih dari 100"<<endl;
            return false;
        }
    }
    double rata = rataNilai(); //digunakan untuk memanggil nilai rata - rata
    cout<<"Nilai Rata - rata : "<<rata<<endl;
    nilai();
    if (rata >= kkm) {
        if (rata >= 91 && rata <= 100) {
            cout<<"Predikat Nilai : A"<<endl;
            cout<<"Status : Lulus"<<endl;
        }
        if (rata >= 80 && rata <= 90) {
            cout<<"Predikat Nilai : B"<<endl;
            cout<<"Status : Lulus"<<endl;
        }
        if (rata >= 60 && rata <= 79) {
            cout<<"Predikat Nilai : C"<<endl;
            cout<<"Status : Lulus"<<endl;
        }
    } else {
        cout<<"Predikat Nilai : D"<<endl;
        cout<<"Status : Tidak Lulus"<<endl;
    }
}
