int atoi(string str) {
        vector<int>v;
        int sign = -4;
        if (str[0]=='-') sign = -1;
        if (sign == -1) {
            for (int i = 1; i<str.size(); i++) {
                if (str[i]=='-' || str[i]=='+') v.push_back(10);
                else v.push_back(str[i]-'0');
            }
        }
        else {
            for (int i = 0; i<str.size(); i++) {
                if (str[i]=='-' || str[i]=='+') v.push_back(10);
                else v.push_back(str[i]-'0');
            }
        }
        for (auto x:v) {
            if (x>9) return -1;
        }
        int x = 1;
        int total = 0;
        for (int i = v.size()-1; i>=0; i--) {
            total += v[i]*x;
            x*=10;
        }
        if (sign == -1) return total*(-1);
        else return total;
    }