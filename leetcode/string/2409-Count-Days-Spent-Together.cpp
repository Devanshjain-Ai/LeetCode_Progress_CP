class Solution {
public:
    int finddayofyear(string date, vector<int>& summonthday) {
        int month =stoi(date.substr(0, 2));
        int days = stoi(date.substr(3));
        return summonthday[month - 1] + days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> monthdays = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
        vector<int> summonthday(13, 0);
        summonthday[1] = 31;
        for (int i = 2; i <= 12; i++) {
            summonthday[i] = summonthday[i - 1] + monthdays[i - 1];
        }
        int arriveAliceDay = finddayofyear(arriveAlice,summonthday);
        int leaveAliceDay = finddayofyear(leaveAlice, summonthday);
        int arriveBobDay = finddayofyear(arriveBob, summonthday);
        int leaveBobDay = finddayofyear(leaveBob, summonthday);

        int overlap =
            min(leaveAliceDay, leaveBobDay) - max(arriveAliceDay, arriveBobDay) +1;
        return overlap < 0 ? 0 : overlap;
    }
};