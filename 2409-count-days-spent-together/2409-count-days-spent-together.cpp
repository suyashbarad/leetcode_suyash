class Solution {
public:
    int toDays(string date){
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total = day;
        for(int i = 0; i < month-1; i++){
            total += days[i];
        }
        return total;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int startA = toDays(arriveAlice);
        int endA = toDays(leaveAlice);
        int startB = toDays(arriveBob);
        int endB = toDays(leaveBob);

        int start = max(startA, startB);
        int end = min(endA, endB);
        return max(0, end-start+1);

    }

};