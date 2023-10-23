class Solution
{
    public:
	int smallSum(vector<int> &arr, int k)
	{
	    long sum =0 ; 
	    long mod = 1e9+7;
	    for(int i = 0; i<arr.size()-1; i++){
	        if(arr[i]<arr[i+1]){
	            sum = (sum+arr[i])%mod;
	        }else{
	            sum = (sum +arr[i]%k)%mod;
	        }
	    }
	    if(arr[arr.size()-1]<arr[0]){
	        sum = (sum+arr[arr.size()-1])%mod; 
	    }else{
	        sum = (sum + arr[arr.size()-1]%k)%mod;
	    }
	    return sum%mod;
	}
};
