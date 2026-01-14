fun main() {
    var result = 1
    val meetingNum = readln().toInt()
    val meetings = List(meetingNum) {
        val (start, end) = readln()
            .split(" ")
            .map { it.toInt() }
        start to end
    }

    val sortedMeetings = meetings.sortedWith(
        compareBy <Pair<Int, Int>> { it.second }
            .thenBy { it.first }
    )

    var lastMeetingEndTime = sortedMeetings.first().second

    for (i in 1 until meetingNum) {
        if (lastMeetingEndTime <= sortedMeetings[i].first) {
            result++
            lastMeetingEndTime = sortedMeetings[i].second
        }
    }
    print(result)
}