import kotlin.math.pow

fun main() {
    val switchNumber = readln().toInt()
    var switchStates = readln().split(" ").map { it.toInt() }.toMutableList()
    val studentNumber = readln().toInt()
    val students: MutableList<Student> = mutableListOf()
    for (i in 0 until studentNumber) {
        val (gender, number) = readln().split(" ").map { it.toInt() }
        students.add(Student(gender, number))
    }
    for (student in students) {
        switchStates = student.doMission(switchStates)
    }
    printSwitch(switchStates)
}

fun printSwitch(switchStates: MutableList<Int>) {
    var result = ""
    switchStates.forEachIndexed { index, it ->
        result += it.digitToChar()
        result += if((index + 1) % 20 == 0 ) {
            "\n"
        } else " "
    }
    print(result.trim())
}

class Student(
    val gender: Int,
    val missionInfo: Int
) {
    fun switch(switchStates: MutableList<Int>, switchNumbers: Int): MutableList<Int> {
        switchStates[switchNumbers] = if (switchStates[switchNumbers] == 0) 1 else 0
        return switchStates
    }

    fun doMission(switchStates: MutableList<Int>): MutableList<Int> {
        var resSwitchStates = switchStates
        val zeroIndex = missionInfo - 1
        if (gender == 1) {
            resSwitchStates.forEachIndexed { index, it ->
                if ((index + 1) % missionInfo == 0)
                    resSwitchStates = switch(resSwitchStates, index)
            }
        } else if (gender == 2) {
            var leftIndex = zeroIndex
            var rightIndex = zeroIndex
            while (true) {
                if (leftIndex < 0 || rightIndex > resSwitchStates.size - 1) {
                    leftIndex++
                    rightIndex--
                    break
                }
                if (resSwitchStates[leftIndex] != resSwitchStates[rightIndex]) {
                    leftIndex++
                    rightIndex--
                    break
                }
                else {
                    leftIndex--
                    rightIndex++
                }
            }
            for (i in leftIndex..rightIndex) {
                resSwitchStates = switch(resSwitchStates, i)
            }
        }
        return resSwitchStates
    }
}
