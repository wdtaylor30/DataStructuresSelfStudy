/*
William Daniel Taylor
6.21.18
Given a set of integers, find all triplets that sum to zero. */

fun main(args: Array<String>) {
    getList()
}//end main

fun getList() {
    //get length of list
    println("How many integers?")
    var length: Int = readLine()!!.toInt()

    //create list and append it
    val setOfInts: MutableList<Int> = mutableListOf()

    var i: Int = 0
    while(i < length) {
        print("\nEnter #${i + 1}: ")
        var newInt: Int = readLine()!!.toInt()
        setOfInts.add(newInt)
        i++
    }//end for

    //DEBUG: print current list
    println("\nCurrent list: $setOfInts")

    //calculate all triplets
    calcTriplets(setOfInts)
}//end method

fun calcTriplets(intSet: List<Int>) {
    //3 indicies to traverse list: lower, mid, upper
    var lower: Int = 0
    var mid: Int = 1
    var upper: Int = intSet.size - 1

    //DEBUG: check to make sure indicies are correct
    println("$lower, $mid, $upper")

    //iterate middle first while checking for zero sum
    while(mid < upper) {
        if(intSet[lower] + intSet[middle] + intSet[upper] == 0) {
            println("intSet[lower] + intSet[middle] + intSet[upper] = 0")
        }//end if
    }//end while
}//end method