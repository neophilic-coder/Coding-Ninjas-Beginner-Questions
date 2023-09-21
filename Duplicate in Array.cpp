//Approach 1

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    vector<int> resultSet;
    for(int i = 0 ; i<arr.size() ; i++){
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
          resultSet.push_back(index + 1);
        }
        arr[index] = arr[index]*(-1);
    }
    for(int i = 0; i<resultSet.size(); i++){
       // cout<<resultSet[i];
        return resultSet[i];
    }
    return 0;
	
}

//Approach 2
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
  for(int  i = 0 ; i<arr.size() ; i++){
    ans = ans^arr[i];
  }
  for(int  i = 0 ; i<arr.size() ; i++){
    ans = ans^i;
  }
  return ans;
}
