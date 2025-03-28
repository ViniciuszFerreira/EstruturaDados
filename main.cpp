#include <iostream>

using namespace std;

int main() {
    int idade;

    // Pergunte a idade do nadador
    cout << "Digite a idade do nadador: ";
    cin >> idade;

    // Verificar a categoria
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    } else if (idade > 17) {
        cout << "Categoria: Sênior" << endl;
    } else {
        cout << "Idade de fora das categorias de natação!" << endl;
    }

    return 0;
}
