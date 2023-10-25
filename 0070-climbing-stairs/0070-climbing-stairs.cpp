class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int f = 1, s = 2, th = f+s;
        for(int i = 3; i <= n; i++)
        {
            th = f+s;
            f = s;
            s = th;
        }

        return th;
    }
};

/*
1 1 1 1 1

2 2 1
2 1 2
1 2 2

1 1 1 2
1 1 2 1
1 2 1 1
2 1 1 1



1 - 1
2 - 2
3 - 3
4 - 5
5 - 8
*/