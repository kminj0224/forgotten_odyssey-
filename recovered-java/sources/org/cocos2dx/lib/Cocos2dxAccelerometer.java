package org.cocos2dx.lib;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.view.Display;
import android.view.WindowManager;

/* JADX INFO: loaded from: classes.dex */
public class Cocos2dxAccelerometer implements SensorEventListener {
    private static final String TAG = "Cocos2dxAccelerometer";
    private Sensor mAccelerometer;
    private Context mContext;
    private int mNaturalOrientation;
    private SensorManager mSensorManager;

    private static native void onSensorChanged(float f, float f2, float f3, long j);

    public Cocos2dxAccelerometer(Context context) {
        this.mContext = context;
        this.mSensorManager = (SensorManager) this.mContext.getSystemService("sensor");
        this.mAccelerometer = this.mSensorManager.getDefaultSensor(1);
        Display display = ((WindowManager) this.mContext.getSystemService("window")).getDefaultDisplay();
        this.mNaturalOrientation = display.getOrientation();
    }

    public void enable() {
        this.mSensorManager.registerListener(this, this.mAccelerometer, 1);
    }

    public void disable() {
        this.mSensorManager.unregisterListener(this);
    }

    @Override // android.hardware.SensorEventListener
    public void onSensorChanged(SensorEvent event) {
        if (event.sensor.getType() == 1) {
            float x = event.values[0];
            float y = event.values[1];
            float z = event.values[2];
            int orientation = this.mContext.getResources().getConfiguration().orientation;
            if (orientation == 2 && this.mNaturalOrientation != 0) {
                x = -y;
                y = x;
            } else if (orientation == 1 && this.mNaturalOrientation != 0) {
                x = y;
                y = -x;
            }
            onSensorChanged(x, y, z, event.timestamp);
        }
    }

    @Override // android.hardware.SensorEventListener
    public void onAccuracyChanged(Sensor sensor, int accuracy) {
    }
}
