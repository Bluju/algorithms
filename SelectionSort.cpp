#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Selection Sort:\n";

    int A[8] = {3,9,52,26,38,57,41,49};
    int n = 8;
    int smallest, j, temp;
    for(int i = 0; i < n - 1; i++){
        //find smallest
        smallest = i;
        j = i + 1;
        while(j < n){
            if(A[j] < A[smallest]){
                smallest = j;
            }
            j++;
        }
        //replace numbers
        temp = A[i];
        A[i] = A[smallest];
        A[smallest] = temp;
        //print
        for(int num : A){
            cout << num << " ";
        }
        cout << "\n";
    }

}