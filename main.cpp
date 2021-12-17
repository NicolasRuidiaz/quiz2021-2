#include <iostream>

using namespace std;
bool primo(int n);
void colat(int n);
int main()
{
    int n,num=0,c=1,primocontador=0;
    cout << "Ingrese numero limite: ";cin>>n;
    primocontador=n;
    cout<<"El primo numero "<<n;
    for (int i=1;primocontador>0;i++){//Error
        if (primo(i)){
            primocontador--;
            num=i;
            c++;
        }
    }
    cout<<" es "<<num;
    colat(num);
    return 0;
}
bool primo (int n){
    bool condicion;
    if (n!=1 && n!=0){
        for (int i=2;i<=n;i++){
            if(n%i==0){
                if(n==i){
                condicion=true;
                }
                else{
                    condicion=false;
                    return condicion;
                }

           }

        }
    }
    else{
        condicion=false;
    }
    return condicion;
}
void colat(int semilla){
    int contador=1;
    while(semilla>1){
        contador++;
        if(semilla%2==0){
            semilla=semilla/2;
        }
        else{semilla=(3*semilla)+1;
        }

    }
    cout<<" Y genera una serie de "<<contador<<"terminos";
}
