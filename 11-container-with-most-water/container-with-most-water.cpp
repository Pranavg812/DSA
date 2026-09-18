class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0;
        int end = height.size() - 1;
        int maxArea = 0;

        while (st < end) {
            int len = min(height[st], height[end]);
            int base = end - st;
            int area = len * base;
            maxArea = max(maxArea, area);
            if (height[st] < height[end])
                st++;
            else
                end--;
        }
        return maxArea;
    }
};
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int st, end;
//         int maxArea = 0;
//         int len, base;
//         int area;
//         for(st =0; st<n; st++){
//             for(end = n-1; end>0; end--){
//             base = end-st;
//             len = min(height[st], height[end]);
//             area = base * len;
//             maxArea = max(area, maxArea);         
//             }
//         }

//         return maxArea;
//     }
// };