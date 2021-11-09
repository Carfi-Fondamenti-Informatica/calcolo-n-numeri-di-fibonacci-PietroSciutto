#include <iostream>
using namespace std;

int main() {
int i=0, n=0, primo=1, secondo=1, terzo=0;
cout<<"Quanti numeri vuoi visualizzare?"<<endl;
cin>>n;

if(n>=2){
    cout << primo << endl;
    cout << secondo << endl;
}else{
    cout<<"errore"<<endl;
}

for(i=1;i<n;i++){
    terzo=primo+secondo;
    primo=secondo;
    secondo=terzo;
    cout<<terzo<<endl;
}
   return 0;
}
