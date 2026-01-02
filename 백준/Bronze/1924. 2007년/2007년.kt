fun main() {
    val year = 2007
    val (monthInt, day) = readln().split(" ").map { it.toInt() }

    val checker = WeekdayChecker(
        year = year,
        yearFirstWeekday = Weekdays.MON
    )

    val weekday = checker.getWeekday(
        month = Months.from(monthInt),
        day = day
    )

    println(weekday.name)
}

class WeekdayChecker(
    year: Int,
    private val yearFirstWeekday: Weekdays
) {
    private val isLeapYear: Boolean = year % 4 == 0

    fun getWeekday(month: Months, day: Int): Weekdays {
        require(day in 1..month.getDays(isLeapYear)) {
            "Invalid day: $day"
        }

        var totalDays = yearFirstWeekday.value - 1

        for (m in Months.entries) {
            if (m == month) break
            totalDays += m.getDays(isLeapYear)
        }

        totalDays += day - 1
        return Weekdays.fromNth(totalDays % 7 + 1)
    }
}

enum class Months(val value: Int, private val days: Int) {
    JAN(1, 31),
    FEB(2, 28),
    MAR(3, 31),
    APR(4, 30),
    MAY(5, 31),
    JUN(6, 30),
    JUL(7, 31),
    AUG(8, 31),
    SEP(9, 30),
    OCT(10, 31),
    NOV(11, 30),
    DEC(12, 31);

    fun getDays(isLeapYear: Boolean): Int =
        if (this == FEB && isLeapYear) days + 1 else days

    companion object {
        fun from(month: Int): Months =
            entries.find { it.value == month }
                ?: throw IllegalArgumentException("Invalid month: $month")
    }
}

enum class Weekdays(val value: Int) {
    MON(1),
    TUE(2),
    WED(3),
    THU(4),
    FRI(5),
    SAT(6),
    SUN(7);

    companion object {
        fun fromNth(day: Int): Weekdays =
            entries.find { it.value == day }
                ?: throw IllegalArgumentException("Invalid weekday: $day")
    }
}
