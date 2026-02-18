fun main() {
    var caseNumber = 1

    while (true) {
        val (L, P, V) = readln().split(" ").map { it.toInt() }

        if (L == 0 && P == 0 && V == 0) break

        val fullCycle = V / P
        val remain = V % P

        val result = fullCycle * L + minOf(L, remain)

        println("Case $caseNumber: $result")
        caseNumber++
    }
}
