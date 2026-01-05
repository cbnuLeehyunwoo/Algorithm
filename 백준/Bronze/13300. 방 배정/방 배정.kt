import kotlin.math.ceil

fun main() {
    var roomCount = 0
    val studentInfos: MutableList<Pair<Int, Int>> = mutableListOf()
    val (studentNumber, roomMax) = readln().split(" ").map { it.toInt() }
    repeat(studentNumber) {
        studentInfos += readStudentInfo()
    }
    val result = studentInfos
        .groupBy(
        keySelector = { it.first },
        valueTransform = { it.second }
    )
        .mapValues { (_, grades) ->
            grades.groupingBy { it }.eachCount()
        }
    result.forEach { (_,grades) ->
        grades.forEach { (_, studentNumber) ->
             roomCount += (ceil(studentNumber / roomMax.toDouble()).toInt())
        }
    }

    print(roomCount)
}

fun readStudentInfo(): Pair<Int, Int> {
    val (gender, grade) = readln().split(" ").map { it.toInt() }
    return gender to grade
}
