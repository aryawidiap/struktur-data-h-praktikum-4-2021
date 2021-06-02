#include <iostream>
#include <queue>
using namespace std;

void showq(queue<char> gq)
{
    queue<char> g = gq;
    int count = 0;
    char temp = g.front();
    while (!g.empty()) {
        while(temp == g.front()){
            count++;
            g.pop();
        }
        cout << count << temp;
        if(!g.empty()){
            cout << " -> ";
            temp = g.front();
            count = 0;
        }     
    }
    cout << endl;
}

void findPath(char *d, int source, int dest){
    int i = 1, index = 0;
    char dir = d[index];
    queue<char> myQ;
    for(int j=0; j < dest; ){
        for(int k = 0; k < 2; k++){
            for(int l = 0; l < i; l++){
                if(j == dest)
                    break;
                
                if(j >= source){
                    //cout << 1 << dir << " -> ";
                    myQ.push(dir);
                }
                j++;
            }
            if(j == dest)
                break;
            if(index+1 < 4){
                index++; //points to next char in array
            } else {
                index = 0; //resets index, points to to first char in array
            }
            dir = d[index];
            
        }
        i++;
    }
    showq(myQ);
}

int main(){
    int TC, //test case
        P, Q; //source & destination
    char mataangin[4] = {'U', 'T', 'S', 'B'};
    cin >> TC;
    for(int i = 0; i < TC; i++){
        cin >> P >> Q;
        findPath(mataangin, P, Q);
    }
    
    return 0;
}