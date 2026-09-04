#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;


//Option-A
class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int ma = 0;

        int i = 0, j = n - 1;

        while(i < j) {

            if(height[i] < height[j]) {

                int area = (j - i) * height[i];

                if(ma < area)
                    ma = area;

                i++;
            }

            else if(height[i] == height[j]) {

                int area = (j - i) * height[i];

                if(ma < area)
                    ma = area;

                i++;
                j--;
            }

            else {

                int area = (j - i) * height[j];

                if(ma < area)
                    ma = area;

                j--;
            }
        }

        return ma;
    }
};

//Option-B
// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         int i = 0;
//         int j = height.size() - 1;
//         int ma = 0;

//         while(i < j) {

//             int area = (j - i) * min(height[i], height[j]);

//             ma = max(ma, area);

//             if(height[i] < height[j])
//                 i++;
//             else
//                 j--;
//         }

//         return ma;
//     }
// };