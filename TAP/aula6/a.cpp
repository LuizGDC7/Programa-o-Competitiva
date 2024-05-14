#include <iostream>
#include <cstring>

using namespace std;

const int maximum = 1e5 + 5;

int main(){
    int numbers[maximum];
    //int sum_range[maximum];
    //int index_of_biggest_loss = 0;
    long long total = 0;
    memset(numbers, 0, sizeof(numbers));
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    /*sum_range[0] = 0, sum_range[n + 1] = 0;*/
    for(int c = 0; c < n; c++){
        int num;
        cin >> num;
        numbers[num]++;
    }
    /*
    for(int c = 1; c <= n + 1; c++){
        sum_range[c] = numbers[c+1]*(c+1) + numbers[c - 1]*(c - 1);
    }
    */
    for(int c = 1; c <= n; c++){
        if(numbers[c] == 0){
            continue;
        }
        if(numbers[c + 1]*(c + 1) <= numbers[c]*c + numbers[c+2]*(c+2)){
            total += numbers[c]*c;
            numbers[c + 1] = 0;
        }else{
            total += numbers[c + 1]*(c + 1);
            numbers[c + 1] = 0;
            numbers[c + 2] = 0;
        }
        /*
        if(sum_range[c + 1] >= sum_range[c] && sum_range[c + 1] >= sum_range[c + 2]){
            total += numbers[c]*c;
            numbers[c + 1] = 0;
        }else{
            total += numbers[c + 1]*(c + 1);
            numbers[c + 1] = 0;
            numbers[c + 2] = 0;
        }
        

        
        if(sum_range[c] <= sum_range[c + 1]){
            total += numbers[c]*c;
            numbers[c + 1] = 0;
        }else if(sum_range[c + 1] >= sum_range[c + 2]){
            total += numbers[c + 1]*(c + 1);
            numbers[c + 1] = 0;
            numbers[c + 2] = 0;
        }else{
            total += numbers[c]*c;
            numbers[c + 1] = 0;
        }
        */
    }

    cout << total << '\n';

    return 0;
}
