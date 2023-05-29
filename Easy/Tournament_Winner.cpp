#include <vector>
#include <string>
#include <map>

using namespace std;

string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) 
{
  // Make a Hash Map which will have the pair of [teams. points] 
  map<string,int> hm;
  string winner;
  int max_wins = 0;

  // Analyze results, and add points to hm
  for(int i=0; i<results.size(); i++)
  {
    // If home team wins
    if(results[i] == 1)
    {
      hm[competitions[i][0]] += 3;
    }
    else
    {
      // Away Team Wins
      hm[competitions[i][1]] += 3;
    }
  }

  // Iterate thought the Map, to see who got the most points.
  for(auto it=hm.begin(); it != hm.end(); it++)
  {
    if(it->second > max_wins)
    {
      max_wins = it->second;
      winner = it->first;
    }
  }

  return winner;
}
