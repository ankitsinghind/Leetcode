class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // To get the overlapping days start from the date that is late arrived by alice or bob
        // Will use max to find max based on ASCII value
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);
        if (start > end){
            return 0;
        }
        // All days in each month
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // Convert string start and end to day number

        // For start (0 is at 48)
        int start_month = (start[0] - '0') * 10 + (start[1] - '0');
        int start_day = (start[3] - '0') * 10 + (start[4] - '0');

        // For end
        int end_month = (end[0] - '0') * 10 + (end[1] - '0');
        int end_day = (end[3] - '0') * 10 + (end[4] - '0');

        // Total days for start
        int count_start_days = 0;
        for (int i = 0; i < start_month - 1; i++){
            count_start_days += days[i];
        }
        count_start_days += start_day;

        // Total days for end
        int count_end_days = 0;
        for (int i = 0; i < end_month - 1; i++){
            count_end_days += days[i];
        }
        count_end_days += end_day;

        return count_end_days - count_start_days + 1; //inclusive as per question
    }
};