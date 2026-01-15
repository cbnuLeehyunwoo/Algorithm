fun score(): Int =
    readln().toInt() * 3 +
    readln().toInt() * 2 +
    readln().toInt()

fun main() {
    val apples = score()
    val bananas = score()

    println(
        when {
            apples > bananas -> 'A'
            apples < bananas -> 'B'
            else -> 'T'
        }
    )
}
