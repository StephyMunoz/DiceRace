#include <iostream>

using namespace std;
int sumatoria(int n, int m);

int main()
{
    int n,m;
    cout << "Ingrese un numero" << endl;
    cin>>n;
    cout<<"Ingrese otro numero"<<endl;
    cin>>m;
    cout<<"La sumatoria de los numeros es: "<<sumatoria(n,m);
    return 0;
}
 int sumatoria (int n, int m)
 {
     int suma=0;
     if(m>=0 && n>=0)
     {
         if(n<=m)
         {
             for(int i=n;i<=m;i++)
             {
                 suma=suma+i;
             }
         }
         else
         {
             for (int i=m;i<=n;i++)
             {
                 suma=suma+i;
             }
         }
     }
     do
     {
       cout<<"ERROR: INGRESE DOS NUMEROS POSITIVOS"<<endl;
       cout<<"Ingrese un numero: "<<endl;
       cin>>n;
       cout<<"Ingrese otro numero: "<<endl;
       cin>>m;
       }
     while(n<0 || m<0);
        if(n<=m)
         {
             for(int i=n;i<=m;i++)
             {
                 suma=suma+i;
             }
         }
         else
         {
             for (int i=m;i<=n;i++)
             {
                 suma=suma+i;
             }
         }


   return suma;
 }
