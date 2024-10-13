fun main() {
    val input = readlnOrNull() ?: return // 입력을 받습니다.
    val (n, m) = input.split(" ").map { it.toIntOrNull() ?: 0 } // 공백으로 분리하고 Int로 변환합니다.

    println("${m - n} $m")
}