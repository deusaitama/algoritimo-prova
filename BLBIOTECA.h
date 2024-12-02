float Volume(float altura, float raio){
    return (PI*pow(raio,2))*altura;
}


void quadrado_perfeito(int num){
    float meio;
    meio=sqrt(num);
    if(meio*meio==num){
        printf("Quadrado perfeito");
    }else
    {
        printf("Nao eh um quadrado negativo");
    }
}
