class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       int a = pref.size();
      
      vector<int> ans(a,0);

      ans[0]=pref[0];

      for(int i=1;i<a;i++){
          ans[i]=pref[i-1]^pref[i];
      }
      return ans;



    }
};
