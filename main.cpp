#include <iostream>
#include <vector>

using namespace std;

void swap_(int &vec0, int &vec1) {
    int temp = vec0;
    vec0 = vec1;
    vec1 = temp;
}

void bubbleSort(vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 -i; j++) {
            if (vec[j] > vec[j+1]) {
                swap_(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
   // Ingresar datos al vector
    vector<int> calificaciones = {};
    for (int i = 0; i < 7; i++) {
        int cal;
        cout<<"Ingresa la calificacion del estudiante "<<i + 1<<": ";
        cin>>cal;
        calificaciones.push_back(cal);
    }

    bubbleSort(calificaciones);

    // Imprimir vector ordenado
    for (int i = 0; i < calificaciones.size(); i++) {
        cout<<calificaciones[i]<<' ';
    }

    cout<<'\n'<<"Calificacion mas alta: "<<calificaciones[calificaciones.size() - 1]<<'\n';
    cout<<"Calificacion mas baja: "<<calificaciones[0]<<'\n';

    return 0;
};