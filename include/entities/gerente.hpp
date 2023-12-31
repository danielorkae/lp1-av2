#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <string>
#include "entities/pessoa.hpp"
#include "entities/funcionario.hpp"

using namespace std;

/**
 * @brief Classe concreta que representa um Gerente.
 */
class Gerente : public Pessoa, public Funcionario
{
private:
    float participacaoLucros; /**< Participação nos lucros do Gerente */

public:
    /**
     * @brief Construtor padrão.
     */
    Gerente();

    /**
     * @brief Construtor que inicializa um Gerente com todos os parâmetros.
     * @param nome O nome do Gerente.
     * @param cpf O CPF do Gerente.
     * @param dataNascimento A data de nascimento do Gerente.
     * @param enderecoPessoal O endereço pessoal do Gerente.
     * @param estadoCivil O estado civil do Gerente.
     * @param qtdFilhos A quantidade de filhos do Gerente.
     * @param salario O salário do Gerente.
     * @param matricula A matrícula do Gerente.
     * @param ingressoEmpresa A data de ingresso na empresa do Gerente.
     * @param participacaoLucros A participação nos lucros do Gerente.
     */
    Gerente(string nome, string cpf, Data dataNascimento, Endereco enderecoPessoal,
            string estadoCivil, int qtdFilhos, float salario, string matricula,
            Data ingressoEmpresa, float participacaoLucros);

    /**
     * @brief Obtém a participação nos lucros do Gerente.
     * @return A participação nos lucros do Gerente.
     */
    float getParticipacaoLucros() const;

    /**
     * @brief Define a participação nos lucros do Gerente.
     * @param participacaoLucros A participação nos lucros do Gerente.
     */
    void setParticipacaoLucros(float participacaoLucros);

    /**
     * @brief Calcula o salário do Gerente considerando os dias de faltas.
     * @param diasFaltas O número de dias de faltas do Gerente.
     * @return O salário calculado.
     */
    float calcularSalario(int diasFaltas);

    /**
     * @brief Calcula a rescisão do Gerente com base na data de desligamento.
     * @param desligamento A data de desligamento do Gerente.
     * @return O valor da rescisão calculado.
     */
    float calcularRescisao(Data desligamento);

    /**
     * @brief Imprime os dados do Gerente.
     */
    void imprimirDados();
};

#endif // GERENTE_HPP
