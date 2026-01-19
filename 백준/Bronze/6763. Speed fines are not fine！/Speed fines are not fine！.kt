fun main() {
    val a = readln().toInt()
    val b = readln().toInt()
    val result =
    when {
        (b - a) in (1..20) -> 100
        (b - a) in (21..30) -> 270
        (b - a) >= 31 -> 500
        else -> 0
    }
    if(result == 0) print("Congratulations, you are within the speed limit!")
    else print("You are speeding and your fine is $$result.")
}