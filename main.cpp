void ex1f2 () {
    Tabela t;

    preenche(t, 20);          // Preenche todas as posições com valor do segundo parâmetro
    setValor(t, 10, 50);      // Colocar valor do terceiro parâmetro na posição do segundo parâmetro
    listar(t);                // Mostra na consola todos os valores armazenados

    cout << getValor(t, 10) << endl;      // Obtém o valor armazenado na posição do segundo parâmetro

    cout << elementoEm(t, 9) << endl;

    elementoEm(t, 9) = 101;

    cout << elementoEm(t, 9) << endl;

}

int main () {
    ex1f2();

    return 0;
}
