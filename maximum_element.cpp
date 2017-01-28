#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#define max(x,y) (x>y?x:y)
#define default 0
#define push_op 1
#define pop_op 2
#define maxval 3
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    stack<int> a;
    stack<int> b;
    int N = 0;
    cin >> N;
    while(N){
        int op;
        cin >> op;
        switch(op){
            case push_op:{
                int value;
                cin >> value;
                if(a.empty()){
                    a.push(value);
                    b.push(value);
                } else {
                    a.push(value);
                    int currentmax = max(value,b.top());
                    b.push(currentmax);
                }
                
                break;
            }
            case pop_op:{
                a.pop();
                b.pop();
                break;
            }
            case maxval:{
                cout << b.top() << endl;
                break;
            }            
        }
        N--;
    }
    return 0;
}
