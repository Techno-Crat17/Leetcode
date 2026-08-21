/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> ans(m,vector<int>(n,-1));

         int r=0,c=0;
        int dir=0;

        //R,D,L,U
        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};

        while(head){

            ans[r][c]=head->val;
            head=head->next;

            int nr=r+dr[dir];
            int nc=c+dc[dir];

             if(nr<0 || nr>=m || nc<0 || nc>=n || ans[nr][nc]!=-1){// changw dir if visited or OOB
                dir=(dir+1)%4;//0 1 2 3 0 1 2 3 . ...

            }

            r=r+dr[dir];
            c=c+dc[dir];
        }

        return ans;
        
    }
};