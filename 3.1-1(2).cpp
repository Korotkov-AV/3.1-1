// 3.1-1(2).cpp
//

#include <iostream>
#include <fstream>

int main(){
    setlocale(LC_ALL, "Russian");
    std::ifstream fin("in.txt");
    std::ofstream fout{"out.txt"};
    //std::string str_in;
    if (!fin.is_open()) {
        std::cout << "\n______Ошибка!______\n";
        return 0;
    }
   

    int size_n, size_m;
    while (fin.good()) {
        fin >> size_n;
        int* mas = new int[size_n];
        for (int i = 0; i < size_n; i++) {
            fin >> mas[i];
        }
        fin >> size_m;
        int* mas_m = new int[size_m];
        for (int i = 0; i < size_m; i++) {
            fin >> mas_m[i];
        }

       //+++++++++++++++++++++++++++++++++++

        std::cout << size_m << "\n";
        fout << size_m;
        fout << "\n";
        fout << mas_m[size_m - 1] <<" ";
        
        std::cout << mas_m[size_m - 1] << ' ';
        for (int i = 0; i < size_m - 1; i++) {
            fout << mas_m[i] << ' ';
            std::cout << mas_m[i] << ' ';
        }
        fout << "\n";
        //________________________________________
        std::cout << "\n";
        std::cout << size_n << "\n";
        fout << size_n;
        fout << "\n";

      
      
        for (int i = 1; i < size_n; i++) {
            fout << mas[i] << ' ';
            std::cout << mas[i] << ' ';
        }
        std::cout << mas[(0)] << ' ';
        fout << mas[0];
        fout << "\n";
        std::cout << '\n';
        fout << '\n';

        delete[] mas;

    }

    fin.close();
    fout.close();






    std::cout << "\nHello World!\n";
}

