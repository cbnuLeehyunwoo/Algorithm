fun main() {
    val s = readln()
    val result = StringBuilder()
    var i = 0

    while (i < s.length) {
        if (s[i] == '<') {
            while (s[i] != '>') {
                result.append(s[i++])
            }
            result.append('>')
            i++
        } else if (s[i] == ' ') {
            result.append(' ')
            i++
        } else {
            val start = i
            while (i < s.length && s[i] != ' ' && s[i] != '<') i++
            result.append(s.substring(start, i).reversed())
        }
    }

    print(result)
}
