package com.ksnowlv.kotlinjni

class KotlinPerson {

    var mPerson: Long = 0

    init {
        mPerson = createPerson()
    }

    fun setPersonName(name: String) {
        setName(mPerson, name)
    }

    fun personName(): String {
        return name(mPerson)
    }


    fun setPersonAge(age: Int) {
        setAge(mPerson,age)
    }

    fun personAge() : Int {
        return age(mPerson)
    }

    companion object {
        init {
            System.loadLibrary("JNIPerson")
        }
    }

    external fun createPerson(): Long
    external fun destroyPerson(person: Long)
    external fun setName(person: Long, name: String)
    external fun name(person: Long): String
    external fun setAge(person: Long, age: Int)
    external fun age(person: Long): Int
}