fun main() {
    var totalScore = 0.0
    var totalCredit = 0
    repeat(20) {
        val (currentCredit, currentScore) = parseCreditScore()
        if (currentScore != "P") {
            totalCredit += currentCredit
            totalScore += scoreStringToNumber(currentScore) * currentCredit
        }
    }
    print(totalScore / totalCredit.toDouble())

}

fun parseCreditScore(): Pair<Int, String> {
    val (lectureName, credit, scoreString) = readln().split(" ")
    val parseResult = Pair(
        credit.toDouble().toInt(),
        scoreString
    )
    return parseResult
}

fun scoreStringToNumber(scoreString: String): Double {
    return Score.entries
        .find { it.tag == scoreString }
        ?.value
        ?: throw IllegalArgumentException("Invalid score: $scoreString")
}

enum class Score(val value: Double, val tag: String) {
    APLUS(4.5, "A+"),
    AZERO(4.0, "A0"),
    BPLUS(3.5, "B+"),
    BZERO(3.0, "B0"),
    CPLUS(2.5, "C+"),
    CZERO(2.0, "C0"),
    DPLUS(1.5, "D+"),
    DZERO(1.0, "D0"),
    FAIL(0.0, "F"),

}
