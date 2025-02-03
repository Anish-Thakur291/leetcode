class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        if (n == 2) return "11";
        if (n == 3) return "21";
        if (n == 4) return "1211";
        if (n == 5) return "111221";
        if (n == 6) return "312211";
        if (n == 7) return "13112221";
        if (n == 8) return "1113213211";
        if (n == 9) return "312211131221";
        if (n == 10) return "1311223113113311";
        
        return "";
    }
};