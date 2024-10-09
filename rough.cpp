#include <iostream>
using namespace std;

int fun(int y){
    return y+y;
}

int gun(int x){
    if (x==0){
        return 0;
    }
    else {
        return x + gun(x-1);
    }
}
int main(){
    // cout<<gun(2)+gun(3)<<endl;
    cout<<gun(4)<<endl;
    return 0;

}