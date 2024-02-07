#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distanceMatrix[205][205];
    const int modulo = 1924134973;

    int getHashValue(string s)
    {
        long long sum = 0;
        for (auto character : s)
        {
            sum = (sum * 26 + character - 'a' + 1) % modulo;
        }
        return sum;
    }

    long long minimumCost(string sourceStr, string targetStr, vector<string> &originalStrList, vector<string> &changedStrList, vector<int> &costList)
    {
        unordered_map<int, int> hashToIndex;
        int index = 0;
        int visitedArray[1005];
        fill(visitedArray, visitedArray + 1005, 0);
        vector<int> sourceHashList, targetHashList;

        int i = 0;
        while (i < originalStrList.size())
        {
            sourceHashList.push_back(getHashValue(originalStrList[i]));
            targetHashList.push_back(getHashValue(changedStrList[i]));
            hashToIndex[sourceHashList[i]];
            hashToIndex[targetHashList[i]];
            visitedArray[originalStrList[i].size()] = 1;
            i++;
        }

        for (auto &hashIndexPair : hashToIndex)
        {
            hashIndexPair.second = index++;
        }

        int j = 0;
        while (j < index)
        {
            int k = 0;
            while (k < index)
            {
                distanceMatrix[j][k] = 1e9;
                k++;
            }
            distanceMatrix[j][j] = 0;
            j++;
        }

        i = 0;
        while (i < originalStrList.size())
        {
            distanceMatrix[hashToIndex[sourceHashList[i]]][hashToIndex[targetHashList[i]]] =
                min(costList[i], distanceMatrix[hashToIndex[sourceHashList[i]]][hashToIndex[targetHashList[i]]]);
            i++;
        }

        int l = 0;
        while (l < index)
        {
            int m = 0;
            while (m < index)
            {
                int n = 0;
                while (n < index)
                {
                    distanceMatrix[m][n] = min(distanceMatrix[m][n], distanceMatrix[m][l] + distanceMatrix[l][n]);
                    n++;
                }
                m++;
            }
            l++;
        }

        long long dpArray[1005];
        dpArray[0] = 0;

        int p = 1;
        while (p <= sourceStr.size())
        {
            dpArray[p] = 1e18;
            p++;
        }

        int q = 0;
        while (q < sourceStr.size())
        {
            long long hashSource = 0, hashTarget = 0;
            int r = q;
            while (r < sourceStr.size())
            {
                hashSource = (hashSource * 26 + sourceStr[r] - 'a' + 1) % modulo;
                hashTarget = (hashTarget * 26 + targetStr[r] - 'a' + 1) % modulo;
                int result = 1e9;

                if (hashSource == hashTarget)
                {
                    result = 0;
                }

                if (visitedArray[r - q + 1])
                {
                    auto it = hashToIndex.find(hashSource);
                    auto it2 = hashToIndex.find(hashTarget);

                    if (it != hashToIndex.end() && it2 != hashToIndex.end())
                    {
                        result = distanceMatrix[it->second][it2->second];
                    }
                }

                if (result != 1e9)
                {
                    dpArray[r + 1] = min(dpArray[r + 1], dpArray[q] + result);
                }
                r++;
            }
            q++;
        }

        if (dpArray[sourceStr.size()] == 1e18)
        {
            return -1;
        }

        return dpArray[sourceStr.size()];
    }
};