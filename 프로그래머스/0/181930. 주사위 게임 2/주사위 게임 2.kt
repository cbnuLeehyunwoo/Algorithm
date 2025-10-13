class Solution {
    fun Int.pow2(): Int {
        return this*this
    }
    fun Int.pow3(): Int {
        return this*this*this
    }
    fun solution(a: Int, b: Int, c: Int): Int {
        var answer: Int = 0

        if(a == b && b == c) answer = (a + b + c) * (a.pow2() + b.pow2() + c.pow2()) * (a.pow3() + b.pow3() + c.pow3())
        else if(a == b || b == c || a == c) answer = (a + b + c) * (a.pow2() + b.pow2() + c.pow2())
        else answer = a + b + c
        return answer
    }
}