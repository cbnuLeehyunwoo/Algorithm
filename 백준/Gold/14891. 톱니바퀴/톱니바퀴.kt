import kotlin.math.pow

fun main() {
    val gears = mutableListOf<Gear>()
    repeat(4) {
        val line = readln()
        // 문자열을 정수 리스트로 변환
        val states = line.map { it.digitToInt() }.toMutableList()
        gears.add(Gear(states))
    }

    val gearSystem = GearSystem(gears)

    val k = readln().toInt()
    repeat(k) {
        val (gearNum, direction) = readln().split(" ").map { it.toInt() }
        // 입력받은 기어 번호는 1-based이므로 0-based로 변환하여 전달
        gearSystem.play(gearNum - 1, direction)
    }

    println(gearSystem.calculateScore())
}

class GearSystem(
    private val gears: List<Gear>
) {
    fun play(targetIndex: Int, direction: Int) {
        // 1단계: 각 기어가 어느 방향으로 회전해야 하는지 결정 (회전 계획 수립)
        val rotateDirections = IntArray(4) { 0 }
        rotateDirections[targetIndex] = direction

        // 왼쪽 방향 전파 확인
        for (i in targetIndex downTo 1) {
            // 왼쪽 기어(i-1)와 현재 기어(i)가 맞닿은 부분이 다르면
            if (gears[i - 1].getRightPole() != gears[i].getLeftPole()) {
                // 현재 기어의 반대 방향으로 왼쪽 기어 회전 예약
                rotateDirections[i - 1] = -rotateDirections[i]
            } else {
                // 극이 같으면 전파 중단
                break
            }
        }

        // 오른쪽 방향 전파 확인
        for (i in targetIndex until 3) {
            // 현재 기어(i)와 오른쪽 기어(i+1)가 맞닿은 부분이 다르면
            if (gears[i].getRightPole() != gears[i + 1].getLeftPole()) {
                // 현재 기어의 반대 방향으로 오른쪽 기어 회전 예약
                rotateDirections[i + 1] = -rotateDirections[i]
            } else {
                // 극이 같으면 전파 중단
                break
            }
        }

        // 2단계: 계획대로 실제 회전 수행
        rotateDirections.forEachIndexed { index, dir ->
            if (dir != 0) {
                gears[index].rotate(dir)
            }
        }
    }

    fun calculateScore(): Int {
        var score = 0
        gears.forEachIndexed { index, gear ->
            if (gear.getTopPole() == 1) { // 12시 방향이 S극(1)이면 점수 추가
                score += 2.0.pow(index).toInt()
            }
        }
        return score
    }
}

class Gear(
    private val teeth: MutableList<Int> // 상태 변경이 일어나므로 MutableList
) {
    fun rotate(direction: Int) {
        if (direction == 1) {
            // 시계 방향: 뒤에꺼 빼서 앞으로 (7번 인덱스 -> 0번 인덱스)
            val last = teeth.removeAt(teeth.lastIndex)
            teeth.add(0, last)
        } else {
            // 반시계 방향: 앞에꺼 빼서 뒤로 (0번 인덱스 -> 7번 인덱스)
            val first = teeth.removeAt(0)
            teeth.add(first)
        }
    }

    // 객체지향적 접근: 외부에서는 내부 인덱스를 알 필요 없이 "왼쪽 극 줘", "오른쪽 극 줘"라고 메시지를 보냄
    
    // 12시 방향 (점수 계산용) : 인덱스 0
    fun getTopPole(): Int = teeth[0]

    // 3시 방향 (오른쪽 맞닿는 곳) : 인덱스 2
    fun getRightPole(): Int = teeth[2]

    // 9시 방향 (왼쪽 맞닿는 곳) : 인덱스 6
    fun getLeftPole(): Int = teeth[6]
}