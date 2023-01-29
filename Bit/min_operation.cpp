int solve(int a, int b) {
        int x = a&b;
        if (a==b) return 0;
        else if (a==0 || b==0 || a==x || b==x) return 1;
        else return 2;
    }