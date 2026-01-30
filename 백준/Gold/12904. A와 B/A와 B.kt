fun main() {
    val start = readln()
    var target = readln()

    while(target.length != start.length) {
        if(target.last() == 'A') target = target.dropLast(1)
        else if (target.last() == 'B') {
            target = target.dropLast(1)
            target = target.reversed()
        }
    }
    val result = if(start == target) 1 else 0
    print(result)
}