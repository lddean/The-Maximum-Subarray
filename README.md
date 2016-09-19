# The-Maximum-Subarray

1.Dynamic Programming O(N)

The formula is b[i] = max(array[i], b[i -1] + array[i])

the b[i] is the maximum subarray included b[i];

2.second method.

        for(int i = 0; i< n; i++){
            
            a = array[i] + a;
            
            if (a > b){
                b = a;
            }if (a < 0){
                a = 0;
            }
        }
