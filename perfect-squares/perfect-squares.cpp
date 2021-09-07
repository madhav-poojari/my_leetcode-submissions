class Solution {
public:
    int numSquares(int n) {
      int arr[10005];
        for(int i=1;i<=n;i++){
            arr[i]=i;
            for(int j=1;(j*j)<=i;j++){
                arr[i]=min(arr[i],1+arr[i-(j*j)]);
//              cout<<arr[i]<<endl;
           }
          }

        return arr[n];
    }

};