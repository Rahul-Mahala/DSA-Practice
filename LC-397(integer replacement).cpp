class Solution {
public:

int leaststeps(long long x){
    int count = 0;
    while(x%2 == 0){
        x = x/2;
        count++;
    }
    return count;
}
    int integerReplacement(int n) {
        long long num = n;
        int step = 0;
        while(num!=1){
            if(num %2 == 0){
                num = num/2;
                step++;
            }
            else if(num == 3){
                num = num -1 ;
                step++;
            }
            else{
                long long minus = leaststeps(num-1);
                long long plus = leaststeps(num+1);
                if(minus >= plus){
                    num = num-1;
                }
                else{
                    num = num+1;
                }
                step++;
            }
        }
        return step;
    }
};