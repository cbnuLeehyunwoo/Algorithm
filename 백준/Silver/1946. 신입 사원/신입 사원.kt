fun main() {
    // 케이스 수
    val case = readln().toInt()
    repeat(case) {
        val applicants = readln().toInt()
        var passApplicants = 0
        // 지원자 수
        val applicantsScores = readApplicantsScores(applicants)
        val sortedScores = applicantsScores.sortedBy { it.first }
        var minInterviewScore = 100_001
        sortedScores.forEach {
            if (it.second < minInterviewScore) {
                passApplicants++
                minInterviewScore = it.second
            }
        }
        println(passApplicants)
    }
}

fun readApplicantsScores(applicants: Int): List<Pair<Int, Int>> {
    val applicantsScores = mutableListOf<Pair<Int,Int>>()
    repeat(applicants) {
        val (paperScore, interviewScore) = readln().split(" ").map { it.toInt() }
        applicantsScores.add(paperScore to interviewScore)
    }
    return applicantsScores
}
