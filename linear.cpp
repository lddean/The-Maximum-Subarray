#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int t;
    
    cin >> t;
    
    for (int index = 0; index < t; index ++){
        
        int n;
        
        cin >> n;
        
        int array[n];
        
        int max_sum = 0;
        for (int i = 0; i < n; i++){
            cin >> array[i];
            
            if (array[i] >= 0){
                max_sum += array[i];
            }
        }
        
        int a = 0;
        int b = -100001;
        
        for(int i = 0; i< n; i++){
            
            a = array[i] + a;
            
            if (a > b){
                b = a;
            }if (a < 0){
                a = 0;
            }
        }
        if (b < 0){
            max_sum = b;
        }
        cout << b <<" "<< max_sum <<endl;
    }
    return 0;
}
