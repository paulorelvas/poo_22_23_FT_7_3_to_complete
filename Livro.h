#ifndef FT_7_3_LIVRO_H
#define FT_7_3_LIVRO_H

#include <iostream>
#include <sstream>

using namespace std;

class Livro {
public:
    Livro(string titulo, string autor, string ISBN);
    ~Livro();
    string obtemTitulo() const;
    string obtemAutor() const;
    string obtemISBN() const;
    string getAsString() const;
    friend bool operator== (const Livro& l1, const Livro& l2);
private:
    string titulo;
    string autor;
    string ISBN;
};
ostream &operator<<(ostream &os, const Livro &p);

#endif //FT_7_3_LIVRO_H
