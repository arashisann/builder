#include <iostream>
#include <string>

class Veiculo {
public:

  class Builder;

  void setRodas(size_t num);
  void setCor(std::string cor);
  void setCavalos(size_t cavalos);

  Veiculo(size_t      num,
          size_t      cavalos,
          std::string cor);

  Veiculo() {}

  void imprimeDados(void);

private:

  size_t _numero_rodas, _cavalo_vapor;
  std::string _cor;
};

class Veiculo::Builder {
public:

  Builder() :
    _numero_rodas { 0 },
  _cavalo_vapor { 0 },
  _cor { "Indefinido" } {}

  Builder& setRodas(size_t num) {
    _numero_rodas = num;
    return *this;
  }

  Builder& setCor(std::string cor) {
    _cor = cor;
    return *this;
  }

  Builder& setCavalos(size_t cavalos) {
    _cavalo_vapor = cavalos;
    return *this;
  }

  Builder& setCarroBranco() {
    _numero_rodas = 4;
    _cor          = "Branco";
    _cavalo_vapor = 150;
    return *this;
  }

  Veiculo build() {
    return Veiculo(_numero_rodas, _cavalo_vapor, _cor);
  }

private:

  size_t _numero_rodas, _cavalo_vapor;
  std::string _cor;
};


void Veiculo::setRodas(size_t num) {
  _numero_rodas = num;
}

void Veiculo::setCor(std::string cor) {
  _cor = cor;
}

void Veiculo::setCavalos(size_t cavalos) {
  _cavalo_vapor = cavalos;
}

Veiculo::Veiculo(size_t      num,
                 size_t      cavalos,
                 std::string cor) :
  _numero_rodas{num},
  _cavalo_vapor{cavalos},
  _cor{cor}
{}

void Veiculo::imprimeDados() {
  std::cout << "Cor: " << _cor << "\nNúmero de rodas: " << _numero_rodas <<
    "\nPotência: " << _cavalo_vapor << " Cavalos" << std::endl;
}
