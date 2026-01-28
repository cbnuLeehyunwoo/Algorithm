fun main() {
    val crane = readln().toInt()
    val cranes = readCranesPower(crane).sortedDescending()

    val box = readln().toInt()
    val boxes = readBoxesWeight(box).sortedDescending().toMutableList()

    if (boxes[0] > cranes[0]) {
        println(-1)
        return
    }
    var totalTime = 0
    while(boxes.isNotEmpty()) {
        totalTime++
        var craneIdx = 0
        var boxIdx = 0
        while (craneIdx < cranes.size && boxIdx < boxes.size) {
            if (cranes[craneIdx] >= boxes[boxIdx]) {
                boxes.removeAt(boxIdx)
                craneIdx++
            } else {
                boxIdx++
            }
        }
    }
    print(totalTime)
}

fun readBoxesWeight(box: Int) = readln().split(" ").map { it.toInt() }

fun readCranesPower(crane: Int) = readln().split(" ").map { it.toInt() }