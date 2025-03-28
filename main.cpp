#include <iostream>

using namespace std;

int main() {
    int idade, op;
    int totalPessoas = 0, somaIdades = 0;
    int contOp1 = 0, contOp2 = 0, contOp3 = 0, contOp4 = 0;

    cout << "Digite a idade e a opinião (1-Ótimo, 2-Bom, 3-Regular, 4-Ruim). Digite idade negativa para sair.\n";

    while (true) {
        cout << "Idade: ";
        cin >> idade;

        if (idade < 0) break; // Encerra a entrada de dados

        cout << "Opinião: ";
        cin >> op;

        if (op < 1 || op > 4) {
            cout << "Opinião inválida! Digite um valor entre 1 e 4.\n";
            continue;
        }

        totalPessoas++;
        somaIdades += idade;

        switch (op) {
            case 1: contOp1++; break;
            case 2: contOp2++; break;
            case 3: contOp3++; break;
            case 4: contOp4++; break;
        }
    }

    if (totalPessoas > 0) {
        cout << "\nResultados da pesquisa:\n";
        cout << "A. Total de pessoas que responderam: " << totalPessoas << endl;
        cout << "B. Média de idade: " << (double)somaIdades / totalPessoas << endl;
        cout << "C. Porcentagem de cada resposta:\n";
        cout << "   Ótimo: " << (contOp1 * 100.0 / totalPessoas) << "%\n";
        cout << "   Bom: " << (contOp2 * 100.0 / totalPessoas) << "%\n";
        cout << "   Regular: " << (contOp3 * 100.0 / totalPessoas) << "%\n";
        cout << "   Ruim: " << (contOp4 * 100.0 / totalPessoas) << "%\n";
    } else {
        cout << "Nenhuma resposta foi registrada.\n";
    }

    return 0;
}
