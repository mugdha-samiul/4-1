#include <bits/stdc++.h>
using namespace std;

void solve(int x1, int y1, int x2, int y2){
    int dx, dy, D, curX, curY;
    dy = abs(y1-y2);
    dx = abs(x1-x2);
    curX = x1, curY = y1;

    if(dy >= dx){                               //for m>=1
        D = (2*dx) - dy;                        //base case
        for(curY = y1;curY <= y2;curY++){
            cout << curX << " " << curY << endl;
            if(D>0){
                D = D + (2*dx) - (2*dy);        //taking the upper right pixel
                curX++;
            }
            else D = D + (2*dx);                //taking the immediate upper pixel
        }
    }
    else{                                       //for 0<m<1
        D = (2*dy) - dx;                        //base case
        for(curX = x1;curX <= x2;curX++){
            cout << curX << " " << curY << endl;
            if(D>0){
                D = D + (2*dy) - (2*dx);        //taking the upper right pixel
                curY++;
            }
            else D = D + (2*dy);                //taking the immediate right pixel
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int x1, y1, x2, y2;

    x1 = 1, y1 = 1, x2 = 8, y2 = 4;             //Case 1 : m<1
    cout << "CASE 1 : (1,1), (8,4) ->\n";
    solve(x1, y1, x2, y2);

    x1 = 1, y1 = 1, x2 = 4, y2 = 8;             //Case 2 : m>1
    cout << "\n\nCASE 2 : (1,1), (4,8) ->\n";
    solve(x1, y1, x2, y2);

    return 0;
}
