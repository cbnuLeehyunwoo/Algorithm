fun main() {
    val case = readln().toInt()
    repeat(case) {
        val applicantScores = mutableListOf<Pair<Int, Int>>()
        val worker = readln().toInt()
        var passApplicant = 0
        repeat(worker) {
            val (paperScore, interviewScore) = readln().split(" ").map { it.toInt() }
            applicantScores.add(paperScore to interviewScore)
        }
        val sortedScores = applicantScores.sortedBy { it.first }
        var minInterviewScore = 100_001
        sortedScores.forEach {
            if(it.second < minInterviewScore) {
                passApplicant++
                minInterviewScore = it.second
            }
        }
        println(passApplicant)
    }
}