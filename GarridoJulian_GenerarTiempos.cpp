#include <iostream>
#include <ctime>
using namespace std;
// Se crea la serie de fibonacci

int fibonacci( int N){

 if(N == 0 || N == 1){
       return N;
  }
  else{
return fibonacci(N - 2) + fibonacci(N - 1);
}
}
// se cre un metodo que cuenta el tiempo que tarda enh ejecutarse el metodo de la serie de fibonacci
int get_time(int N){
 clock_t t;
t = clock();
fibonacci(N);
t = clock() - t;
float time = ((float)t)/CLOCKS_PER_SEC;
return time;

}

int main(){
int n = 35 ;
int i = 0;


while(i<n){
 cout<< get_time(i);
i++;
}

return 0;
}


