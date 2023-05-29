#include<vector>
#include<algorithm>

using namespace std;

int minimumWaitingTime(vector<int> queries) {
  int result = 0;
  int currentSum = 0;

  // If there is only one element, return 0
  if(queries.size() == 1)
  {
    return 0;
  }

  // Sort the queries from smaller to larger
  sort(queries.begin(), queries.end());

  // If there is only two elements, return the smaller one
  if(queries.size() == 2)
  {
    return queries[0];
  }

  // Sum the sum of all the previous numbers
  for(int i=0; i <= queries.size() - 2; i++){
    currentSum += queries[i];
    result += currentSum;
  }

  return result;
}
