int maxSumSubarray(int a[]){
    int maxSum = 0;
    int currSum = 0;
    for (int i = 1; i < a.length; i++) {
        currSum = currSum + a[i];
        if(currSum < maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}