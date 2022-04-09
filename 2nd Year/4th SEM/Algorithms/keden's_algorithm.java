long maxSubarraySum(int arr[], int n){
        
    // Your code here
long maxSum = 0;
long currSum = 0;
for (int i = 0; i < n; i++) {
    currSum = currSum + arr[i];
    if(currSum > maxSum){
        maxSum = currSum;
    }
    if(currSum < 0){
        currSum = 0;
    }
}
return maxSum;
}
// ******************************************* //
long maxSubarraySum(int arr[], int n){
       
    // Your code here
    int sum=0;
    int max_sum=Integer.MIN_VALUE;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(max_sum<sum)
        max_sum=sum;
        if(sum<0)
        sum=0;
        
    }
    return max_sum; 
}
