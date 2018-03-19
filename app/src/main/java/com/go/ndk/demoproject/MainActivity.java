package com.go.ndk.demoproject;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
     //   int s = getShapAre(4, 6);
        int s = getRetange(4, 6);

        tv.setText(stringFromJNI() + s);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native int intFromJNI(int number);

    public native int getShapAre(int a, int b);

    public native int getRetange(int a, int b);


    public native Image getImage();




}
