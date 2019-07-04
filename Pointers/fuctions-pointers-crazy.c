//
// Created by lego on 3/07/19.
//
void sayHello(){
    printf("Hello from C");
}
void sumar(int a, int b, void (*fuctionCallBack)(int)){
    int result=a+b;
    fuctionCallBack(result);
}
void callBack(int resultado){
    printf("\nResultado: %d",resultado);
}
int main(){
    void (*funtionSayhello)(void)=sayHello;
    funtionSayhello();
    sumar(5,5,callBack);
}



