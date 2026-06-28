class Solution {
	public:
	vector<int> leaders(vector<int>& arr) {
		// code here
		
		vector<int>res;
		int j=0;
		for (int i = 0; i<arr.size(); i++)
			{
			for (j = i + 1; j<arr.size(); j++)
				{
				if (arr[i]<arr[j])
					break;
			}
			
			if (j == arr.size())
				res.push_back(arr[i]);
		}
		return res;
	}
};

/* vector<int> leaders(vector<int>& arr) {
	// code here
	int n = arr.size();
	vector<int>res;
	int maxright = arr[n - 1];
	
	res.push_back(maxright);
	
	for (int i = n - 2; i >= 0; i--)
		{
		if (arr[i] >= maxright)
			{
			maxright = arr[i];
			res.push_back(arr[i]);
		}
	}
	reverse(res.begin(), res.end());
	return res;
} */
