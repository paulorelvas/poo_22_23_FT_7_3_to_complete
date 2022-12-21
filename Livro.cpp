#include "Livro.h"

Livro::Livro(string titulo, string autor, string ISBN):titulo(titulo), autor(autor), ISBN(ISBN){}
Livro::~Livro(){
    //todo:
}
string Livro::obtemTitulo() const{
    return titulo;
}
string Livro::obtemAutor() const{
    return autor;
}
string Livro::obtemISBN() const{
    return ISBN;
}

string Livro::getAsString() const{
    ostringstream os;
    os << "Título: " << titulo << " | Autor: " << autor << " | ISBN: " << ISBN << endl;
    return os.str();
}

bool operator== (const Livro& l1, const Livro& l2){
    return l1.ISBN == l2.ISBN;
}
ostream &operator<<(ostream &os, const Livro &p){
    os << p.getAsString();
    return os;
}