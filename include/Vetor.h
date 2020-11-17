#ifndef VETOR_H
#define VETOR_H
#include <cmath>

class Vetor
{
    public:
        Vetor(int,int,int);
        virtual ~Vetor();
        void soma(Vetor *v);
        void subtracao(Vetor *v);
        void multiplicacao(int escalar);
        bool isIgual(Vetor *v);
        float modulo();
       // double modulo();
        float produtoEscalar(Vetor *v);
       // double ProdutoEscalar(Vetor *v);
       void rotacao(float *rot_matrix );
        void normalize();
        //Vetor novoVetor(float tamanho , float angulo);
        Vetor rotacaoEixoX(float angulo);

        int getX();
        int getY();
        int getZ();

        void setX(int);
        void setY(int);
        void setZ(int);

    protected:

    private:
        int x,y,z;
};
#endif // VETOR_H
