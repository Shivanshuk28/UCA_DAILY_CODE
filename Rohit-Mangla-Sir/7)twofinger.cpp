class Solution {
public:
    int getdis(char c1, char c2) {
        if (c1 == '\0' || c2 == '\0') return 0;

        int x1 = (c1 - 'A') / 6;
        int y1 = (c1 - 'A') % 6;
        int x2 = (c2 - 'A') / 6;
        int y2 = (c2 - 'A') % 6;

        return (abs(x2 - x1) + abs(y2 - y1));
    }

    int solve(int index, string word, char f1, char f2) {
        if (index >= word.size()) {
            return 0;
        }

        int choice1 = getdis(word[index], f2) + solve(index + 1, word, f1, word[index]);
        int choice2 = getdis(word[index], f1) + solve(index + 1, word, word[index], f2);

        return min(choice1, choice2);
    }

    int minimumDistance(string word) {
        return solve(0, word, '\0', '\0');
    }
};
