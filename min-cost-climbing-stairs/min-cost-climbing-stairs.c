int min(int a,int b){
int c=a<b?a:b;    
    return c;
}

int minCostClimbingStairs(int* cost, int costSize){
int arr[1002];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=costSize;i++)
    arr[i]=min(cost[i-1]+arr[i-1],cost[i-2]+arr[i-2]);
return arr[costSize];
}