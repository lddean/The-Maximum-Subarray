#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t = 0;
    cin >> t;
    
    for (int index = 0; index < t; index ++){
        
        int n = 0;
        
        cin >> n;
        
        int array[n];
        
        int b[n];
        
        int max_sum = 0;
        
        for (int i = 0; i < n ; i++){
            
            cin >> array[i];
            
            if (array[i] > 0){
                
                max_sum += array[i];
                
            }
            
        }
        
        int max_sub = array[0];
        
        b[0] = array[0];
        
        for (int i = 1; i < n; i++){
            
            if (array[i] >b[i - 1] + array[i]){
                b[i] = array[i];
            }else{
                b[i] = b[i - 1] + array[i];
            }
            
            if (b[i] > max_sub){
                max_sub = b[i];
            }
            
        }
        
        if (max_sub < 0){
            max_sum = max_sub;
        }
        
        cout << max_sub << " " << max_sum << endl;
    }
    return 0;
}
