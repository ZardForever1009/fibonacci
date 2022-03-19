#include <iostream>
#include <vector>

using namespace std;

// recursive solution
int find_result(int num){
    long long int ans=0;
    if(num==0)return 0;
    else if(num==1)return 1;
    else {
        ans=find_result(num-1)+find_result(num-2);
        return ans;
    }
}

// iterative solution
int find_result2(vector<long long int> vec, int num){
    vec[0]=0;
    vec[1]=1;
    for(int i=2;i<=num;i++){
        vec[i]=vec[i-1]+vec[i-2];
    }
    return vec[num];
}


int main(){
    
    int num=0;
    cout<<"====Fibonacci Calculator===="<<endl;
    cout<<"enter number: ";
    cin>>num;
    vector<long long int> vec = vector<long long int>(num+1,0);
    cout<<"iterative result: "<<find_result2(vec,num)<<endl;
    cout<<"recursive result: "<<find_result(num)<<endl;
    
    system("pause");    
    return 0;
}