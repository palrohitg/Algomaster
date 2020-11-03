// Assign the value in the vectors 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
      vector<int> ans; 
      int row = matrix.size(); 
      int col = matrix[0].size(); 
      
      int element = row * col;

      int SR = 0; 
      int ER = row - 1; 
      int SC = 0; 
      int EC = col - 1; 

       
      int count = 0; 

      while(count <= element) {

          for (int i = SC; i <= EC; i++) {
              ans.push_back(matrix[SR][i]);
              count++; 
          }
          SR = SR + 1; 

          for (int i = SR; i <= ER; i++) {
              ans.push_back(matrix[i][EC]);
              count++;
          }
          EC = EC - 1; 
          
          if (EC > SC) {
            for (int i = EC; i >= SC; i--) {
                ans.push_back(matrix[ER][i]);
                count++;
            }
          }

          ER = ER - 1;
          if (ER >= SR) { 
            for (int i = ER; i >= SR; i--) {
                ans.push_back(matrix[i][SC]); 
                count++; 
            } 
          }
          SC = SC + 1;
      }
      return ans;   
    }
};

#Bit manipulations 

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ret = 0;
        while(head)
        {
            ret <<= 1;
            ret |= head->val;
            head = head->next;
        }
        return ret;
    }
};