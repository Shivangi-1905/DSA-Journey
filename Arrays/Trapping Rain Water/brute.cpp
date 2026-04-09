int n = height.size();
      vector<int>prefixMax(n);
      vector<int>suffixMax(n);
      if(n<=2) return 0;
      //PrefixMax Matrix
      prefixMax[0] = height[0];
      for(int i = 1 ; i<n ; i++){
         prefixMax[i] = max(prefixMax[i-1] , height[i]);
      }
      //SuffixMax Matrix
      suffixMax[n-1] = height[n-1];
      for(int i = n-2 ; i>=0 ; i++){
         suffixMax[i] = max(suffixMax[i+1] , height[i]);
      }
      //Finding total sum of trapped water
      int total = 0;
      for(int i = 0 ; i<n ; i++){
            total += min(prefixMax[i] , suffixMax[i]) - height[i];
        }
      return total;
