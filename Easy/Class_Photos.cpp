#include <vector>
#include <algorithm>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  bool redbigger = true;

  // Sort both rows from smaller height to taller
  sort(redShirtHeights.begin(), redShirtHeights.end());
  sort(blueShirtHeights.begin(), blueShirtHeights.end());

  // Find out who needs to be in the front row
  if(redShirtHeights[0] > blueShirtHeights[0]){
    redbigger = true; // If the smallest person is blue, then blue is on front
  }
  else if(blueShirtHeights[0] > redShirtHeights[0]){
    redbigger = false; // Otherwise, red is on front
  }
  else{
    return false; // If they are the same height, photo is not possible
  }

  // Iterate though the students
  for(int i=0; i<redShirtHeights.size(); i++){
    if(redbigger){
      // If at any point a blue student is taller, photo is not possible
      if(redShirtHeights[i] <= blueShirtHeights[i]){
        return false; 
      }
    }
    else{
      // If at any point a red student is taller, photo is not possible
      if(blueShirtHeights[i] <= redShirtHeights[i]){
        return false;
      }
    }
  }
  return true;
}
