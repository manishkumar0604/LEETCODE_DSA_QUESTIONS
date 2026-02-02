class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();

        for(int i=0;i<n;i++) {
            if(asteroids[i]>0) st.push(asteroids[i]);
            else {
                // Collision happens only if stack top is moving right
                while(!st.empty() && st.top()>0 && st.top()<abs(asteroids[i])) {
                    st.pop();  // smaller right asteroid explodes
                }

                if(!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop();  // both explode
                }
                else if(st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);  // no collision
                }
            }
        }

        // Convert stack to vector
        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
