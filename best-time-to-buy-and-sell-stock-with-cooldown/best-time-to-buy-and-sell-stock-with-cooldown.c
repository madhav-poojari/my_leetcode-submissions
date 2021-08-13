

int maxProfit(int* prices, int pricesSize){
int a,b,c=0,temp;
     a=0;
    b=-prices[0];
    for(int i=1;i<pricesSize;i++){
    int B=b;
        b=a-prices[i]>b?a-prices[i]:b;
        a=a>c?a:c;   
    c=B+prices[i];
        
    }    
    return fmax(a,c);
}