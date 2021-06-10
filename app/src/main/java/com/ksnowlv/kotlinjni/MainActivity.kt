package com.ksnowlv.kotlinjni

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.util.Log

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main);

        var person = KotlinPerson()
        person.setPersonAge(10)

        Log.i("----Android age = ", "" + person.personAge())
        person.setPersonName("ksnowlv(律威)")

        Log.i("----Android name = ", person.personName())

    }
}
