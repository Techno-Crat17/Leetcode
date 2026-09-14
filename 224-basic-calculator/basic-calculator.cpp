class Solution {
public:
    int calculate(string s) {

        int res = 0;
        long long num = 0;
        int sign = 1;

        stack<int> st;

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0'); // number bano
            }

            else if (s[i] == '+') {
                res += (num * sign); // res add karo
                num = 0;
                sign = 1;
            }

            else if (s[i] == '-') {
                res += (num * sign); // res add karo
                num = 0;
                sign = -1;
            }

            else if (s[i] == '(') {

                st.push(res);  // bracket se pehle ka res save karo
                st.push(sign); // bracket se pehle ka sign save karo

                // bracket ke andar fresh calculation
                res = 0;
                sign = 1;
                num = 0;
            }

            else if (s[i] == ')') {

                res += (num * sign); // bracket ke andar ka final res
                num = 0;

                int last_sign = st.top();
                st.pop();

                int last_res = st.top();
                st.pop();

                // bracket ke pehle wale res ke saath combine karo
                res = last_res + (last_sign * res);
            }
        }

        res += (num * sign); // last number ko res mein add karo

        return res;
    }
};