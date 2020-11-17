#include "Vetor.h"

Vetor::Vetor(int x,int y,int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

Vetor::~Vetor()
{
    //dtor
}

void Vetor::soma(Vetor *v){
    this->x=this->x + v->getX();
    this->y=this->y+ v->getY();
    this->z=this->z+v->getZ();

}
void Vetor::subtracao(Vetor *v){
		this->x=this->x-v->getX();
		this->y=this->y-v->getY();
		this->z=this->z-v->getZ();
	}
void Vetor::multiplicacao(int x){
		this->x=this->x*x;
		this->y=this->y*x;
		this->z=this->z*x;
	}
bool Vetor::isIgual(Vetor *x){
		if (x->getX()==this->x && x->getY()==this->y && this->z==x->getZ()){
			return true;
		}
		return false;
	}
float Vetor::modulo(){
		return sqrt((this->x*this->x) + (this->y*this->y)+(this->z*this->z));
	}
float Vetor::produtoEscalar(Vetor *v){
		return ( (this->x*v->getX()) + (this->y*v->getY())+ (this->z*v->getZ()) );
	}
void Vetor::rotacao(float *rot_matrix )
{
	float vaux[3];
	vaux[0] = this->x *rot_matrix[0] + this->y*rot_matrix[1] + this->z*rot_matrix[2];
	vaux[1] = this->x*rot_matrix[4] + this->y*rot_matrix[5] + this->z*rot_matrix[6];
	vaux[2] = this->x*rot_matrix[8] + this->y*rot_matrix[9] + this->z*rot_matrix[10];
	this->x = vaux[0];
	this->y = vaux[1];
	this->z = vaux[2];
}
void Vetor::normalize(){
    float tamanho=this->modulo();
    this->x=this->getX()/tamanho;
    this->y=this->getY()/tamanho;
    this->z=this->getZ()/tamanho;

}
/*
Vetor Vetor::novoVetor(float tamanho, float angulo){
    return Vetor( cos(angulo)*tamanho, sin(angulo)*tamanho );
}
*/
Vetor Vetor::rotacaoEixoX(float angulo){
    //equação da rotação em torno do eixo z
this->x=( this->x* cos(angulo) )- ( this->y* sin(angulo) )
this->y=(this->x* sin(angulo)  ) + (this->y*cos(angulo)  )

}
int Vetor::getX() {
		return x;
	}
void Vetor::setX(int x) {
		this->x = x;
	}
int Vetor::getY() {
		return this->y;
	}
void Vetor::setY(int y) {
		this->y = y;
	}
int Vetor::getZ(){
        return this->z;
    }
void Vetor::setZ(int z){
        this->z=z;
    }
