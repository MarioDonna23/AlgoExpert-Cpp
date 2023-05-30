#include <vector>
#include <algorithm>
using namespace std;

int tandemBicycle(vector<int> redShirtSpeeds, vector<int> blueShirtSpeeds,
                  bool fastest) {
  int time = 0;
  
  if(fastest){
    sort(redShirtSpeeds.begin(), redShirtSpeeds.end(), greater <>()); // Sort from fastest to slowest
  }
  else{
    sort(redShirtSpeeds.begin(), redShirtSpeeds.end());  // Sort from slowest to fastest
  }
  sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end()); // Sort from slowest to fastest

  for(int i=0; i<blueShirtSpeeds.size(); i++){
      time += max(blueShirtSpeeds[i], redShirtSpeeds[i]); // Add the fastest of the two
  }
  return time;
}
